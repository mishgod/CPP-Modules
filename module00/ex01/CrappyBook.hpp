#ifndef CRAPPYBOOK_HPP
#define CRAPPYBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class	CrappyBook
{
public:
	void		addContact();
	void		searchContact();
	CrappyBook();
	~CrappyBook();


private:
	int			currentContact;
	Contact		contact[8];

};
#endif
