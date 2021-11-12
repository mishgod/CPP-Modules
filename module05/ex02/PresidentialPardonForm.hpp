#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(string const& target);
	PresidentialPardonForm(PresidentialPardonForm const& copy);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);

	void	action() const;
	void	execute(Bureaucrat const& bureaucrat) const;
	const string	getTarget(void) const;

private:
	PresidentialPardonForm();
	string	target_;
};


#endif
