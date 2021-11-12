#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "../colors.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat {
public:
	Bureaucrat(string const& name, int grade = 50);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const& copy);
	Bureaucrat& operator=(Bureaucrat const& copy);

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
	int				getGrade(void) const;
	void			incGrade(int amount = 1);
	void			decGrade(int amount = 1);
	void			signedForm(Form& form, string const& reason = "");
	void 			executeForm(Form const& form) const;

private:
	Bureaucrat();
	const string	name_;
	int				grade_;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat);


#endif
