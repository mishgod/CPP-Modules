#include <iostream>
#include "CrappyBook.hpp"

int	main(void)
{
	bool		run;
	std::string	command;
	CrappyBook	phonebook;

	run = true;
	while (run)
	{
		std::cout << "Please input your command" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			phonebook.addContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (command == "EXIT")
		{
			run = false;
			std::cout << "Your crappy awesome phonebook says goodbye to you" << std::endl;
		}
		else
			std::cout << "Wrong command. Please try again" << std::endl;
	}
}