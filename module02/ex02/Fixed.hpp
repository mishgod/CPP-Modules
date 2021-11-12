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
	~Fixed();
	Fixed(const Fixed& original);
	Fixed(int num);
	Fixed(float num);

	Fixed& operator=(const Fixed& original);
	Fixed operator+(Fixed const& fixed);
	Fixed operator-(Fixed const& fixed);
	Fixed operator*(Fixed const& fixed);
	Fixed operator/(Fixed const& fixed);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	bool operator>(Fixed const &fixed) const;
	bool operator<(Fixed const &fixed) const;
	bool operator>=(Fixed const &fixed) const;
	bool operator<=(Fixed const &fixed) const;
	bool operator==(Fixed const &fixed) const;
	bool operator!=(Fixed const &fixed) const;

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed& min(Fixed& first, Fixed& second);
	static Fixed const& min(Fixed const& first, Fixed const& second);
	static Fixed& max(Fixed& first, Fixed& second);
	static Fixed const& max(Fixed const& first, Fixed const& second);

private:
	int					value_;
	static int const	point = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& fixed);

#endif
