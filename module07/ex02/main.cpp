#include "Array.hpp"

int main(void)
{
	cout << "----------------------------" << endl;
	try
	{
		Array<int> iArr(5);
		cout << "Make int array from 5" << endl;
		iArr.print();
		cout << endl << "Init arr:" << endl;
		for (int i = 0; i < 5; i++)
			iArr[i] = 10;
		iArr.print();
		cout << endl;
		cout << "Make copy and edit smth" << endl;
		Array<int> jArr = iArr;
		iArr[0] = 9;
		cout << "this is edited iArr" << endl;
		iArr.print();
		cout << endl << "This is its copy - jArr" << endl;
		jArr.print();
		cout << endl;
		iArr[12] = 10;
	}
	catch (std::exception& a)
	{
		cout << RED << a.what() << NORMAL << endl;
	}
	try
	{
		cout << "----------------------------" << endl;
		Array<double> dArr(5);
		cout << "Make double array from 5" << endl;
		dArr.print();
		cout << endl << "Init arr:" << endl;
		for (int i = 0; i < 5; i++)
			dArr[i] = 42.42;
		dArr.print();
		cout << endl;
	}
	catch (std::exception& a)
	{
		cout << a.what() << endl;
	}
	try
	{
		cout << "----------------------------" << endl;
		Array<char> cArr(4);
		cout << "Make char array from 4" << endl;
		cout << "Init arr:" << endl;
		for (int i = 0; i < 4; i++)
			cArr[i] = 'a';
		cArr.print();
		cout << endl;
		cout << "----------------------------" << endl;
	}
	catch (std::exception& a)
	{
		cout << a.what() << endl;
	}
	try
	{
		Array<string> sArr(4);
		cout << "Make string array from 4" << endl;
		cout << "Init arr:" << endl;
		sArr[0] = "Make";
		sArr[1] = "America";
		sArr[2] = "great";
		sArr[3] = "again!";
		sArr.print();
		cout << endl;
		cout << "----------------------------" << endl;
	}
	catch (std::exception& a)
	{
		cout << a.what() << endl;
	}
	{
		//original test
		#define MAX_VAL 750
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
}
