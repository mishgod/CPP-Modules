#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class Form {
public:
	Form(string const& name, int gradeSign, int gradeExec);
	virtual ~Form();
	Form(Form const& copy);
	Form& operator=(Form const& copy);

	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	class Errors : public std::exception {
	public:
		const char* error;
	private:
		const char* what() const throw();
	};

	const string	getName(void) const;
	int				getGradeSign(void) const;
	int				getGradeExecute(void) const;
	bool			getSign(void) const;
	void			signedForm(Bureaucrat &bureaucrat);
	virtual void	action() const = 0;
	virtual void	execute(Bureaucrat const& bureaucrat) const = 0;

private:
	Form();
	const string	name_;
	const int 		gradeSign_;
	const int 		gradeExecute_;
protected:
	bool			sign_;
};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif