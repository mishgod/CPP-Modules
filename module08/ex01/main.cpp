#include "span.hpp"

int main()
{
	srand(time(0));
	{
		cout << "--------------------max and min---------------------" << endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(17);
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		cout << "shortestSpan = " << sp.shortestSpan() << endl;
		cout << "longestSpan = " << sp.longestSpan() << endl;
		cout << "----------------------------------------------------" << endl;
	}
	{
		cout << "----------------------worked------------------------" << endl;
		Span sp = Span(5);
		sp.addNumber(0);
		sp.addNumber(10);
		sp.addNumber(11);
		sp.addNumber(15);
		sp.addNumber(2);
		cout << "shortestSpan = " << sp.shortestSpan() << endl;
		cout << "longestSpan = " << sp.longestSpan() << endl;
		cout << "----------------------------------------------------" << endl;
	}
	{
		cout << "---------------------empty span---------------------" << endl;
		try {
			Span sp = Span(5);
			cout << "shortestSpan = " << sp.shortestSpan() << endl;
			cout << "longestSpan = " << sp.longestSpan() << endl;
		}
		catch (std::exception& error)
		{
			cout << RED << error.what() << NORMAL << endl;
		}
		cout << "----------------------------------------------------" << endl;
	}
	{
		cout << "-----------------------big span---------------------" << endl;
		try {
			Span sp = Span(100000);
			for (int i = 0; i < 100000; i++)
				sp.addNumber(i);
			cout << "shortestSpan = " << sp.shortestSpan() << endl;
			cout << "longestSpan = " << sp.longestSpan() << endl;
		}
		catch (std::exception& error)
		{
			cout << RED << error.what() << NORMAL << endl;
		}
		cout << "----------------------------------------------------" << endl;
	}
	{
		cout << "----------------------rand span---------------------" << endl;
		try {
			Span sp = Span(20);
			for (int i = 0; i < 20; i++)
				sp.addNumber(rand() % 10000);
			cout << "shortestSpan = " << sp.shortestSpan() << endl;
			cout << "longestSpan = " << sp.longestSpan() << endl;
		}
		catch (std::exception& error)
		{
			cout << RED << error.what() << NORMAL << endl;
		}
		cout << "----------------------------------------------------" << endl;
	}
}