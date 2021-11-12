#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{}

Fixed::~Fixed()
{}

Fixed::Fixed(const Fixed &original)
{
	this->value_ = original.getRawBits();
}

Fixed::Fixed(int const intNum)
{
	this->value_ = (intNum << this->point);
}

Fixed::Fixed(float const floatNum)
{
	this->value_ = roundf(floatNum * (1 << this->point));
}

Fixed &Fixed::operator=(const Fixed &original)
{
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

Fixed Fixed::operator+(Fixed const& fixed)
{
	Fixed sum(*this);

	sum.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (sum);
}

Fixed Fixed::operator-(Fixed const& fixed)
{
	Fixed res(*this);

	res.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (res);
}

Fixed Fixed::operator*(Fixed const& fixed)
{
	Fixed multi(*this);

	multi.setRawBits((this->value_ * fixed.value_) / (1 << this->point));
	return (multi);
}

Fixed Fixed::operator/(Fixed const& fixed)
{
	Fixed dev(*this);

	if (fixed.toFloat() == 0)
	{
		cout << "Dicision by zero" << endl;
		return (*this);
	}
	dev.setRawBits((this->value_ / fixed.value_) * (1 << this->point));
	return (dev);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);

	++(this->value_);
	return (copy);
}

Fixed& Fixed::operator++()
{
	this->value_++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);

	--(this->value_);
	return (copy);
}

Fixed Fixed::operator--()
{
	this->value_--;
	return (*this);
}

bool Fixed::operator>(Fixed const &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed const& Fixed::min(Fixed const& first, Fixed const& second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed const& Fixed::max(Fixed const& first, Fixed const& second)
{
	if (first > second)
		return (first);
	return (second);
}