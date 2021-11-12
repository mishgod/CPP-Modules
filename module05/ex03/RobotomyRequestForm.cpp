#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const string &target) :
Form("RobotomyRequestForm", 72, 45), target_(target)
{
	cout << GREEN << "this is the constructor of RobotomyRequest" << NORMAL << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
Form("RobotomyRequestForm", 72, 45), target_(copy.target_)
{
	this->sign_ = copy.getSign();
	cout << GREEN << "this is copy constructor of RobotomyRequest" << NORMAL << endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << RED << "this is the destructor of RobotomyRequest" << NORMAL << endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return (*this);
	this->sign_ = copy.getSign();
	this->target_ = copy.target_;
	return (*this);
}

void RobotomyRequestForm::action() const
{
	srand(time(0));
	cout << PURPLE << "trrrr tr tr trrrrrrr trrr trrrr      trrrrr tr" << NORMAL << endl;

	if (rand() % 2)
		cout << PURPLE << this->target_ << " has been robotomized successfully" << NORMAL << endl;
	else
		cout << PURPLE << "It’s a failure" << NORMAL << endl;

}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	bureaucrat.executeForm(*this);
}

const string RobotomyRequestForm::getTarget() const
{
	return this->target_;
}
