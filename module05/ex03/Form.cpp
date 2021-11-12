#include "Form.hpp"

Form::Form(string const& name, int gradeSign, int gradeExec) :
name_(name), gradeSign_(gradeSign), gradeExecute_(gradeExec), sign_(false)
{
	if (this->gradeSign_ > 150 || this->gradeExecute_ > 150)
		throw Form::GradeTooLowException();
	if (this->gradeSign_ < 1 || this->gradeExecute_ < 1)
		throw Form::GradeTooHighException();
	cout << GREEN << "Form " << this->name_ << " has created" << NORMAL << endl;
}

Form::Form(const Form &copy) :
name_(copy.name_), gradeSign_(copy.gradeSign_), gradeExecute_(copy.gradeExecute_), sign_(copy.sign_)
{
	cout << GREEN << "Copy of Form " << this->name_ << " has created" << NORMAL << endl;
}

Form::~Form()
{
	cout << RED << "Form " << this->name_ << " has destroyed" << NORMAL << endl;
}

Form &Form::operator=(Form const& copy)
{
	if (this == &copy)
		return (*this);
	this->sign_ = copy.sign_;
	return (*this);
}

const string Form::getName() const
{
	return this->name_;
}

int Form::getGradeSign() const {
	return this->gradeSign_;
}

int Form::getGradeExecute() const {
	return this->gradeExecute_;
}

bool Form::getSign() const
{
	return this->sign_;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void Form::signedForm(Bureaucrat &bureaucrat)
{
	if (this->gradeSign_ < bureaucrat.getGrade())
		bureaucrat.signedForm(*this, "signed grade is higher");
	bureaucrat.signedForm(*this);
	this->sign_ = true;
}

std::ostream &operator<< (std::ostream &out, const Form& form)
{
	out << YELLOW << "Form " << form.getName() << " has " << form.getGradeSign() << " signed grade" << NORMAL;
	out << YELLOW << " and " << form.getGradeExecute() << " execute grade." << NORMAL;

	return out;
}
