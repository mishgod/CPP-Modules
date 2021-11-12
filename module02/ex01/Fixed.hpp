#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::string;

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& original);
	Fixed& operator=(const Fixed& original);
	Fixed(int num);
	Fixed(float num);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int					value_;
	static int const	point = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& fixed);

#endif
