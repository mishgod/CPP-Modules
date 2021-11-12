#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int			randNum;

	randNum = rand() % 3;
	switch (randNum)
	{
		case 0:
			cout << "Created class: " << BLUE << "A" << NORMAL << endl;
			return new A;
		case 1:
			cout << "Created class: " << BLUE << "B" << NORMAL << endl;
			return new B;
		case 2:
			cout << "Created class: " << BLUE << "C" << NORMAL << endl;
			return new C;
		default:
			cout << "Something went wrong with rand()" << endl;
	}
	return (0);
}

void	identify(Base* p)
{
	Base* BaseA = dynamic_cast<A*>(p);
	Base* BaseB = dynamic_cast<B*>(p);
	Base* BaseC = dynamic_cast<C*>(p);

	if (BaseA)
		cout << "A" << std::endl;
	else if (BaseB)
		cout << "B" << std::endl;
	else if (BaseC)
		cout << "C" << std::endl;
	else
		cout << "Another class" << endl;
}

void	identify(Base& p)
{
	try {
		Base& BaseA = dynamic_cast<A&>(p);
		(void)BaseA;
		cout << "A" << std::endl;
	}
	catch (std::bad_cast)
	{
		try
		{
			Base& BaseB = dynamic_cast<B&>(p);
			(void)BaseB;
			cout << "B" << std::endl;
		}
		catch (std::bad_cast)
		{
			try
			{
				Base& BaseС = dynamic_cast<C&>(p);
				(void)BaseС;
				cout << "С" << std::endl;
			}
			catch (std::bad_cast)
			{
				cout << "Another class" << endl;
			}
		}
	}
}

int main() {
	srand(time(0));
	cout << "---------------" << endl;
	Base* base1;
	base1 = generate();
	cout << "prt base1: " << YELLOW;
	identify(base1);
	cout << NORMAL;
	cout << "ref base1: " << YELLOW;
	identify(*base1);
	cout << NORMAL;

	cout << "---------------" << endl;
	Base* base2;
	base2 = generate();
	cout << "prt base2: " << YELLOW;
	identify(base2);
	cout << NORMAL;
	cout << "ref base2: " << YELLOW;
	identify(*base2);
	cout << NORMAL;

	cout << "---------------" << endl;
	Base* base3;
	base3 = generate();
	cout << "prt base3: " << YELLOW;
	identify(base3);
	cout << NORMAL;
	cout << "ref base3: " << YELLOW;
	identify(*base3);
	cout << NORMAL;


	return 0;
}
