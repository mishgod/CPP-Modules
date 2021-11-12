#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	cout << GREEN << "WrongCat has constructed" << NORMAL << endl;
}

WrongCat::~WrongCat()
{
	cout << RED << "WrongCat has destructed" << NORMAL << endl;
}

WrongCat::WrongCat(const WrongCat &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
	cout << "New WrongCat is " << original.type_ << endl;
	if (this == &original)
		return *this;
	this->type_ = original.type_;
	return (*this);
}

void WrongCat::makeSound() const
{
	cout << BRIGHT_YELLOW << "WrongCat says: \"Meow\"" << NORMAL << endl;
}

std::ostream& operator<<(std::ostream& out, WrongCat const& сat)
{
	out << "WrongCat's type is \"" << сat.getType() << "\"";
	return (out);
}
