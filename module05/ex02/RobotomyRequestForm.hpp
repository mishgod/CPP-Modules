#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(string const& target);
	RobotomyRequestForm(RobotomyRequestForm const& copy);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);

	void	action() const;
	void	execute(Bureaucrat const& bureaucrat) const;
	const string	getTarget(void) const;

private:
	RobotomyRequestForm();
	string	target_;
};


#endif
