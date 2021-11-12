#include "Intern.hpp"

Intern::Intern()
{
	cout << GREEN << "We create one more slave" << NORMAL << endl;
}

Intern::Intern(const Intern &copy)
{
	cout << GREEN << "Moooore slaves (copy)" << NORMAL << endl;
	*this = copy;
}

Intern::~Intern()
{
	cout << RED << "We lost him" << NORMAL << endl;
}

Intern &Intern::operator=(const Intern &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

Form *Intern::makeShrubbery(const string &target) { return (new ShrubberyCreationForm(target)); }

Form *Intern::makeRobot(const string &target) { return (new RobotomyRequestForm(target)); }

Form *Intern::makePreident(const string &target) { return (new PresidentialPardonForm(target)); }

Form *Intern::makeForm(const string &form, const string &target)
{
	string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form*	(Intern::*function[3])(string const& target);

	function[0] = &Intern::makeShrubbery;
	function[1] = &Intern::makeRobot;
	function[2] = &Intern::makePreident;

	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i])
			return (this->*function[i])(target);
	}
	throw Intern::FunctionNotFound();
}

const char *Intern::FunctionNotFound::what() const throw()
{
	return ("404 not found");
}

