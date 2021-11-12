#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
//#include "Bureaucrat.hpp"


class Intern {
public:
	Intern();
	~Intern();
	Intern(Intern const& copy);
	Intern& operator=(Intern const& copy);

	Form *makeShrubbery(string const& target);
	Form *makeRobot(string const& target);
	Form *makePreident(string const& target);
	Form *makeForm(string const& form, string const& target);

	class FunctionNotFound : public std::exception {
		const char* what() const throw();
	};
};

#endif
