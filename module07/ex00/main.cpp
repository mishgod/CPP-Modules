#include "whatever.hpp"

int main() {

	{
		cout << "-------------------------------------------------" << endl;
		cout << "                     SWAP                        " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "ints:" << endl;
		int onei = 10;
		int twoi = 20;
		cout << "one is " << onei << "; two is " << twoi << endl;
		swap(onei, twoi);
		cout << "one is " << onei << "; two is " << twoi << endl;
		cout << "-------------------------" << endl;

		cout << "doubles:" << endl;
		double oned = 10.5;
		double twod = 20.5;
		cout << "one is " << oned << "; two is " << twod << endl;
		swap(oned, twod);
		cout << "one is " << oned << "; two is " << twod << endl;
		cout << "-------------------------" << endl;

		cout << "floats:" << endl;
		double onef = 10.5f;
		double twof = 10.603f;
		cout << "one is " << onef << "; two is " << twof << endl;
		swap(onef, twof);
		cout << "one is " << onef << "; two is " << twof << endl;
		cout << "-------------------------" << endl;

		cout << "char:" << endl;
		char onec = '3';
		char twoc = '4';
		cout << "one is " << onec << "; two is " << twoc << endl;
		swap(onec, twoc);
		cout << "one is " << onec << "; two is " << twoc << endl;
		cout << "-------------------------" << endl;

		cout << "strings:" << endl;
		string ones = "one";
		string twos = "second";
		cout << "one is " << onec << "; two is " << twoc << endl;
		swap(onec, twoc);
		cout << "one is " << onec << "; two is " << twoc << endl;
	}
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                    MIN & MAX                    " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "ints:" << endl;
		int onei = 10;
		int twoi = 20;
		cout << "one is " << onei << "; two is " << twoi << endl;
		cout << "min is " << min(onei, twoi) << "; max is " << max(onei, twoi) << endl;
		cout << "-------------------------" << endl;

		cout << "doubles:" << endl;
		double oned = 10.5;
		double twod = 20.5;
		cout << "one is " << oned << "; two is " << twod << endl;
		cout << "min is " << min(oned, twod) << "; max is " << max(oned, twod) << endl;
		cout << "-------------------------" << endl;

		cout << "floats:" << endl;
		float onef = 10.5f;
		float twof = 10.603f;
		cout << "one is " << onef << "; two is " << twof << endl;
		cout << "min is " << min(onef, twof) << "; max is " << max(onef, twof) << endl;
		cout << "-------------------------" << endl;

		cout << "char:" << endl;
		char onec = '3';
		char twoc = '4';
		cout << "one is " << onec << "; two is " << twoc << endl;
		cout << "min is " << min(onec, twoc) << "; max is " << max(onec, twoc) << endl;
		cout << "-------------------------" << endl;

		cout << "strings:" << endl;
		string ones = "lol";
		string twos = "kek";
		cout << "one is " << ones << "; two is " << twos << endl;
		cout << "min is " << min(ones, twos) << "; max is " << max(ones, twos) << endl;
		cout << "-------------------------------------------------" << endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}
