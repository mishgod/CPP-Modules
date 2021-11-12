#include "CrappyBook.hpp"

void	swapContacts(Contact& contactPrev, Contact& contactNext, int index)
{
	contactNext.setIndex(index);
	contactPrev = contactNext;
}

void	CrappyBook::addContact()
{
	if (currentContact != 8)
	{
		contact[currentContact].setContact(currentContact);
		currentContact++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			swapContacts(contact[i], contact[i + 1], i);
		contact[currentContact - 1].setContact(currentContact - 1);
	}
}

void 	CrappyBook::searchContact()
{
	std::string	number;
	int	contactNumber;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Input|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < currentContact; i++)
		contact[i].printToTable();
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	contactNumber = 0;
	while (contactNumber == 0)
	{
		std::cout << "Input the number of contact:" << std::endl;
		std::cin >> number;
		contactNumber = std::atoi(number.c_str());
		if (contactNumber > 8 || contactNumber <= 0 || (currentContact < 8 && contactNumber > currentContact))
		{
			std::cout << "Please input valid contact number" << std::endl;
			contactNumber = 0;
		}
	}
	contact[contactNumber - 1].printContact();
}

CrappyBook::CrappyBook()
{
	currentContact = 0;
}

CrappyBook::~CrappyBook()
{

}