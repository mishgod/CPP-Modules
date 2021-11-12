#include "easyfind.hpp"

template <class T>
static void	checkNumber(T& target, int num)
{
	try {
		cout << "Number is " << GREEN << num << NORMAL << ". Result of easyfind is ";
		cout << GREEN << easyfind(target, num) << "." << NORMAL << endl;
	}
	catch (std::exception& error)
	{
		cout << RED << error.what() << "." << NORMAL << endl;
	}
}

template <class T>
static void print(T& target, string const& type)
{
	cout << type << " is " << BLUE;
	for (typename T::iterator it = target.begin(); it != target.end(); it++)
		cout << *it << " ";
	cout << endl << NORMAL;
}

template <class Key, class Value>
static void print(std::map<Key, Value>& target, string const& type)
{
	cout << type << " is:" << endl << BLUE;
	for (typename std::map<Key, Value>::iterator it = target.begin(); it != target.end(); it++)
		cout << it->first << " " << it->second << ";" << endl;
	cout << NORMAL;
}

int main(void)
{
	{
		cout << "-------------------VECTOR-------------------" << endl;
		std::vector<int> vect;
		vect.push_back(1);
		vect.push_back(2);
		vect.push_back(21);
		vect.push_back(3);
		print(vect, "Vector");
		checkNumber(vect, 10);
		checkNumber(vect, 1);
		checkNumber(vect, 2);
		cout << "--------------------------------------------" << endl;
	}
	{
		cout << "-------------------DEQUE--------------------" << endl;

		std::deque<int> deq;
		deq.push_back(3);
		deq.push_back(4);
		deq.push_back(100);
		deq.push_front(2);
		deq.push_front(1);
		print(deq, "Deque");
		checkNumber(deq, 5);
		checkNumber(deq, 10);
		checkNumber(deq, 1);
		checkNumber(deq, 3);
		cout << "--------------------------------------------" << endl;
	}
	{
		cout << "--------------------MAP---------------------" << endl;
		std::map<int, int> ismap;
		ismap.insert(std::make_pair(1, 10));
		ismap.insert(std::make_pair(2, 5));
		ismap.insert(std::make_pair(3, 30));
		ismap.insert(std::make_pair(4, 1));
		ismap.insert(std::make_pair(7, 2));
		ismap.insert(std::make_pair(5, 3));
		print(ismap, "Map");
		checkNumber(ismap, 3);
		checkNumber(ismap, 10);
		checkNumber(ismap, 1);
		checkNumber(ismap, 6);
		checkNumber(ismap, 30);
		cout << "--------------------------------------------" << endl;
	}
	{
		cout << "--------------------SET---------------------" << endl;
		std::set<int> isset;
		isset.insert(42);
		isset.insert(21);
		isset.insert(21);
		isset.insert(31);
		isset.insert(2);
		isset.insert(1);
		print(isset, "Set");
		checkNumber(isset, 3);
		checkNumber(isset, 1);
		checkNumber(isset, 21);
		checkNumber(isset, 6);
		cout << "--------------------------------------------" << endl;
	}
	{
		cout << "--------------------LIST--------------------" << endl;
		std::list<int> lst;
		lst.push_back(3);
		lst.push_back(4);
		lst.push_back(100);
		lst.push_front(2);
		lst.push_front(1);
		print(lst, "List");
		checkNumber(lst, 3);
		checkNumber(lst, 1);
		checkNumber(lst, 21);
		checkNumber(lst, 6);
		cout << "--------------------------------------------" << endl;
	}
}