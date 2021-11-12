#include "mutantstack.hpp"

int main()
{
	{
		cout << "---------------------my tests-----------------------" << endl;
		MutantStack<int> mutStack;

		mutStack.push(9);
		mutStack.push(152);
		mutStack.push(32);
		mutStack.push(15);
		mutStack.push(5);
		mutStack.push(5);
		mutStack.pop();
		MutantStack<int>::iterator it;
		cout << "Stack is:" << endl;
		for (it = mutStack.begin(); it != mutStack.end(); it++)
			cout << BLUE << *it << NORMAL <<endl;
		std::sort(mutStack.begin(), mutStack.end());
		cout << "Sorted stack:" << endl;
		for (it = mutStack.begin(); it != mutStack.end(); it++)
			cout << GREEN << *it << NORMAL <<endl;
		cout << "Delete last:" << endl;
		mutStack.pop();
		for (it = mutStack.begin(); it != mutStack.end(); it++)
			cout << BLUE << *it << NORMAL <<endl;
	}
	{
		cout << "-------------------original tests-------------------" << endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	return 0;
}