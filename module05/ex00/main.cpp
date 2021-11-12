#include "Bureaucrat.hpp"

int	main(void)
{
	cout << "--------------------------------" << endl;
	cout << "Grade = 151" << endl;
	try
	{
		Bureaucrat nick("Nick", 151);
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "--------------------------------" << endl;
	cout << "increment negative grade" << endl;
	try
	{
		Bureaucrat minus("minus", 10);
		minus.incGrade(-2);
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "--------------------------------" << endl;
	cout << "Decrincrement lower than 150" << endl;
	try
	{
		Bureaucrat steve("Steve", 10);
		steve.decGrade(140);
		cout << steve << endl;
		steve.decGrade();
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
	cout << "--------------------------------" << endl;
	cout << "Normal bureaucrat" << endl;
	try
	{
		Bureaucrat* zigmund = new Bureaucrat("Zigmund", 10);
		zigmund->incGrade();
		cout << *zigmund << endl;
		Bureaucrat zigmundCopy(*zigmund);
		delete zigmund;
		cout << zigmundCopy << endl;
	}
	catch (std::exception& e)
	{
		cout << CYAN << e.what() << NORMAL << endl;
	}
}