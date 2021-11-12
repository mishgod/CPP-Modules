#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
using std::cout;
using std::endl;
using std::string;

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& original);
	Fixed& operator =(const Fixed& original);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;

private:
	int					value_;
	static int const	point = 8;
};
#endif
