#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string &name, int grade) : name_(name), grade_(grade)
{
	if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	cout << GREEN << "Bureaucrat " << this->name_ << " has created" << NORMAL << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.name_)
{
	cout << GREEN << "Copy of bureaucrat " << this->name_ << " has created" << NORMAL << endl;
	this->grade_ = copy.grade_;
}

Bureaucrat::~Bureaucrat()
{
	cout << RED << "Bureaucrat " << this->name_ << " has destroyed" << NORMAL << endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const& copy)
{
	if (this == &copy)
		return (*this);
	this->grade_ = copy.grade_;
	return (*this);
}

const string Bureaucrat::getName() const
{
	return this->name_;
}

int Bureaucrat::getGrade() const
{
	return this->grade_;
}

void Bureaucrat::incGrade(int amount)
{
	if (amount < 0)
	{
		Bureaucrat::Errors errors;
		errors.error = "Invalid input grade";
		throw errors;
	}
	this->grade_ -= amount;
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade(int amount)
{
	if (amount < 0)
	{
		Bureaucrat::Errors errors;
		errors.error = "Invalid input grade";
		throw errors;
	}
	this->grade_ += amount;
	if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signedForm(Form &form, string const& reason)
{
	if (form.getGradeSign() < this->grade_)
	{
		cout << BLUE << this->name_ << " can't signed because " << reason << NORMAL << endl;
		throw Form::GradeTooLowException();
	}
	cout << BLUE << this->name_ << " signs " << form.getName() << NORMAL << endl;
}

void Bureaucrat::executeForm(Form const& form) const
{
	if (form.getGradeExecute() < this->grade_ || !form.getSign())
	{
		cout << BLUE << this->name_ << " can't execute it" << NORMAL << endl;
		Bureaucrat::Errors errors;
		errors.error = "form didn't execute";
		throw errors;
	}
	form.action();
	cout << BLUE << this->name_ << " executes " << form.getName() << NORMAL << endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Bureaucrat::Errors::what() const throw()
{
	return (this->error);
}


std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << YELLOW << "Bureaucrat " << bureaucrat.getName() << " has " << bureaucrat.getGrade() << " grade." << NORMAL;
	return out;
}
