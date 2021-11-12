#include "Intern.hpp"

int	main(void)
{
	Intern me;
	Bureaucrat boss("Ilsur", 50);
	Bureaucrat director("German", 10);

	cout << "Some bureaucrat has created, let's start" << endl;
	cout << "------------------------" << endl;
	cout << "Worked example:" << endl;

	try
	{
		Form* rrf;
		rrf = me.makeForm("robotomy request", "pot");
		rrf->signedForm(boss);
		rrf->execute(director);
		delete rrf;
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}

	cout << "------------------------" << endl;
	cout << "boss can't execute:" << endl;

	try
	{
		Form* rrf;
		rrf = me.makeForm("robotomy request", "pot");
		rrf->signedForm(boss);
		rrf->execute(boss);
		delete rrf;
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}

	cout << "------------------------" << endl;
	cout << "undefined form:" << endl;

	try
	{
		Form* rrf;
		rrf = me.makeForm("pick pikachu", "yep");
		rrf->signedForm(boss);
		rrf->execute(boss);
		delete rrf;
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}


}