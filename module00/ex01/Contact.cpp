#include "Contact.hpp"
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setContact(int index)
{
	index_ = index + 1;
	std::cout << "Input your first name:" << std::endl;
	std::cin >> firstName_;
	std::cout << "Input your last name:" << std::endl;
	std::cin >> lastName_;
	std::cout << "Input your nickname:" << std::endl;
	std::cin >> nickname_;
	std::cout << "Input your phone number:" << std::endl;
	std::cin >> phoneNumber_;
	std::cout << "Input your darkest secret:" << std::endl;
	std::cin >> darkestSecret_;
}

void	Contact::setIndex(int index)
{
	index_ = index + 1;
}

void	Contact::printToTable()
{
	std::cout << "|" << std::setw(10) << index_ << "|" ;
	if (firstName_.length() < 10)
		std::cout << std::setw(10) << firstName_.substr(0, 9) << "|";
	else
		std::cout << std::setw(9) << firstName_.substr(0, 9) << "." << "|";
	if (lastName_.length() < 10)
		std::cout << std::setw(10) << lastName_.substr(0, 9) << "|";
	else
		std::cout << std::setw(9) << lastName_.substr(0, 9) << "." << "|";
	if (nickname_.length() < 10)
		std::cout << std::setw(10) << nickname_.substr(0, 9) << "|";
	else
		std::cout << std::setw(9) << nickname_.substr(0, 9) << "." << "|";
	std::cout << std::endl;
}

void	Contact::printContact()
{
	std::string	str(45, '-');
	std::cout << str << std::endl;
	std::cout << "first name: " << firstName_ << std::endl;
	std::cout << "last name: " << lastName_ << std::endl;
	std::cout << "nickname: " << nickname_ << std::endl;
	std::cout << "phone number: " << phoneNumber_ << std::endl;
	std::cout << "darkest secret: " << darkestSecret_ << std::endl;
	std::cout << str << std::endl;
}