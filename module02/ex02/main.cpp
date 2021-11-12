#include "Fixed.hpp"

int main( void )
{
	cout << "--------------------test1--------------------" << endl;
	cout << "standart test" << endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	cout << endl << "--------------------test2--------------------" << endl;
	Fixed c(10);
	Fixed d(1.5f);
	Fixed e(0);
	cout << "sum = " << c + d << endl;
	cout << "res = " << c - d << endl;
	cout << "multi = " << c * d << endl;
	cout << "div = " << c / d << endl;
	cout << "max = " << Fixed::max(c, d) << endl;
	cout << "max const= " << Fixed::max(10, 10.1f) << endl;
	cout << "min = " << Fixed::min(c, d) << endl;
	cout << "min const= " << Fixed::min(10, 10.1f) << endl;
	cout << "c = " << c << endl;
	cout << "postfix is = " << c++ << endl;
	cout << "after postfix is = " << c << endl;
	cout << "prefix is = " << --c << endl;
	cout << "after prefix is = " << c << endl;
	cout << "multi com = (2 + 2) * 2 = " << (Fixed(2) + Fixed(2)) * Fixed(2) << endl;
	cout << "div by zero is " << c / e << endl;
	return 0;
}
