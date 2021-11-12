#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{
	cout << "Default constructor called" << endl;
}
Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed& original)
{
	cout << "Copy constructor called" << endl;
	this->value_ = original.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &original)
{
	cout << "Assignation operator called" << endl;
	if (this == &original)
		return *this;
	this->value_ = original.getRawBits();
	return (*this);
}

void Fixed::setRawBits(const int raw)
{
	this->value_ = raw;
}

int Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return (this->value_);
}