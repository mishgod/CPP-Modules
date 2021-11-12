#include "Form.hpp"

int	main(void)
{
	cout << "------------------------" << endl;
	cout << "Create some bureaucrat" << endl;
	Bureaucrat mrPresident("Vladimir", 1);
	Bureaucrat mayor("Ilsur", 50);
	Bureaucrat ivan("Ivan", 130);
	cout << mrPresident << endl;
	cout << mayor << endl;
	cout << ivan << endl;


	cout << "Some bureaucrat has created, let's start" << endl;
	cout << "------------------------" << endl;
	try
	{
		Form form56("form56", 56, 56);
		cout << form56 << endl;
		form56.signedForm(mrPresident);
		form56.signedForm(mayor);
		form56.signedForm(ivan);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}


	cout << "------------------------" << endl;
	cout << "Wrong forms" << endl;
	try
	{
		Form formWrong("president form", 0, 150);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	try
	{
		Form formWrong("president form", 151, 150);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}


	cout << "------------------------" << endl;
	cout << "President form" << endl;
	try
	{
		Form formPresident("president form", 1, 1);
		cout << formPresident << endl;
		formPresident.signedForm(mrPresident);
		formPresident.signedForm(mayor);
		formPresident.signedForm(ivan);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}


	cout << "------------------------" << endl;
	cout << "easy form" << endl;
	try
	{
		Form formEasy("Easy form", 150, 150);
		cout << formEasy << endl;
		formEasy.signedForm(mrPresident);
		formEasy.signedForm(mayor);
		formEasy.signedForm(ivan);
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}

	cout << "------------------------" << endl;
	cout << "Check sign" << endl;
	try
	{
		Form formSign("Easy form", 150, 150);
		cout << formSign << endl;
		cout << "Status of sign is " << formSign.getSign() << endl;
		formSign.signedForm(ivan);
		cout << "Status of sign is " << formSign.getSign() << endl;
	}
	catch (std::exception & e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	
	cout << "------------------------" << endl;
	cout << "Destroy all bureaucrats" << endl;
}