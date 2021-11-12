#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(string const& target);
	ShrubberyCreationForm(ShrubberyCreationForm const& copy);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);

	void	action() const;
	void	execute(Bureaucrat const& bureaucrat) const;
	const string	getTarget(void) const;

private:
	ShrubberyCreationForm();
	string	target_;
};

#endif
