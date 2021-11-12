#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string &target) :
Form("PresidentialPardonForm", 25, 5), target_(target)
{
	cout << GREEN << "this is the constructor of PresidentialPardon" << NORMAL << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
Form("PresidentialPardonForm", 25, 5), target_(copy.target_)
{
	this->sign_ = copy.getSign();
	cout << GREEN << "this is copy constructor of PresidentialPardon" << NORMAL << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << RED << "this is the destructor of PresidentialPardon" << NORMAL << endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return (*this);
	this->sign_ = copy.getSign();
	this->target_ = copy.target_;
	return (*this);
}

void PresidentialPardonForm::action() const
{
	cout << PURPLE << this->target_ << " has been pardoned by Zafod Beeblebrox" << NORMAL << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	bureaucrat.executeForm(*this);
}

const string PresidentialPardonForm::getTarget() const
{
	return this->target_;
}
