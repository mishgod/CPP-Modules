#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &original)
{
	cout << "Copy constructor called" << endl;
	this->value_ = original.getRawBits();
}

Fixed::Fixed(int const intNum)
{
	cout << "Int constructor called" << endl;
	this->value_ = (intNum << this->point);
}

Fixed::Fixed(float const floatNum)
{
	cout << "Float constructor called" << endl;
	this->value_ = roundf(floatNum * (1 << this->point));
}

Fixed &Fixed::operator=(const Fixed &original)
{
	cout << "Assignation operator called" << endl;
	if (this == &original)
		return *this;
	this->value_ = original.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed)
{
	out << fixed.toFloat();
	return (out);
}

void	Fixed::setRawBits(const int raw)
{
	this->value_ = raw;
}

int		Fixed::getRawBits() const
{
	return (this->value_);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value_ / (1 << this->point));
}

int		Fixed::toInt(void) const
{
	return (this->value_ >> this->point);
}