#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	cout << "------------------------" << endl;
	cout << "Create some bureaucrat" << endl;
	Bureaucrat mrPresident("Vladimir", 1);
	Bureaucrat mayor("Ilsur", 50);
	Bureaucrat ivan("Ivan", 140);
	cout << mrPresident << endl;
	cout << mayor << endl;
	cout << ivan << endl;
	cout << "Some bureaucrat has created, let's start" << endl;
	cout << "------------------------" << endl;
	cout << "Mr president will sign and execute all forms" << endl;
	try
	{
		ShrubberyCreationForm forest("Forest");
		RobotomyRequestForm	rrrobot("your son");
		PresidentialPardonForm clapTrap("CL4P-TP");
		forest.signedForm(mrPresident);
		clapTrap.signedForm(mrPresident);
		rrrobot.signedForm(mrPresident);
		forest.execute(mrPresident);
		rrrobot.execute(mrPresident);
		clapTrap.execute(mrPresident);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "------------------------" << endl;
	cout << "Work with Shrubbery form" << endl;
	try
	{
		ShrubberyCreationForm home("Home");
		home.signedForm(ivan);
		home.execute(ivan);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "------------------------" << endl;
	cout << "Work with Robot form" << endl;
	try
	{
		RobotomyRequestForm	youNeighbor("your cat");
		youNeighbor.signedForm(mayor);
		youNeighbor.execute(mrPresident);
		youNeighbor.execute(mayor);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "------------------------" << endl;
	cout << "Check unsigned form to execute" << endl;
	try
	{
		PresidentialPardonForm drive("Rustam");
		drive.execute(mrPresident);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "------------------------" << endl;
	cout << "Calling destructors:" << endl;

}