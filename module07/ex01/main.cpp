#include "iter.hpp"
#include <math.h>

template <typename T>
void print(T& value)
{
	cout << value << " ";
}

void	increment(int& x)
{
	x++;
}


int main(void)
{
	cout << "---------------------" << endl;
	cout << "iter int array:" << endl;
	int array[5] = {5, 10, 2, 333, 102};
	cout << endl;
	iter(array, 5, print);
	iter(array, 5 , increment);
	cout << endl;
	iter(array, 5, print);
	cout << endl;
	cout << "---------------------" << endl;
	cout << "iter string array:" << endl;
	string arr2[3] = {"brave", "new", "world"};
	iter(arr2, 3, print);
	cout << endl;

	return 0;
}