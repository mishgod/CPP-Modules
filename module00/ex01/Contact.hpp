#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();
	void	setContact(int);
	void 	printContact();
	void	printToTable();
	void	setIndex(int);

private:
	ssize_t		index_;
	std::string firstName_;
	std::string lastName_;
	std::string nickname_;
	std::string phoneNumber_;
	std::string darkestSecret_;
};

#endif
