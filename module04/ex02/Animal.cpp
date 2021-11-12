#include "Animal.hpp"

Animal::~Animal()
{
	cout << RED << "Animal has destructed" << NORMAL << endl;
}

Animal &Animal::operator=(const Animal &original)
{
	cout << "New animal is " << original.type_ << endl;
	if (this == &original)
		return *this;
	this->type_ = original.type_;
	return (*this);
}

void	Animal::setType(const string& type)
{
	this->type_ = type;
}

string	Animal::getType() const
{
	return (this->type_);
}

std::ostream& operator<<(std::ostream& out, Animal const& animal)
{
	out << "Animal's type is \"" << animal.getType() <<"\"";
	return (out);
}