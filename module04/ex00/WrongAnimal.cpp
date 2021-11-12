#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("default")
{
	cout << GREEN << "Default WrongAnimal has constructed" << NORMAL << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << RED << "WrongAnimal has destructed" << NORMAL << endl;
}

WrongAnimal::WrongAnimal(string const& type) : type_(type)
{
	cout << GREEN << "New WrongAnimal is " << type << NORMAL << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	cout << "New WrongAnimal is " << original.type_ << endl;
	if (this == &original)
		return *this;
	this->type_ = original.type_;
	return (*this);
}

void	WrongAnimal::setType(const string& type)
{
	this->type_ = type;
}

string	WrongAnimal::getType() const
{
	return (this->type_);
}

void WrongAnimal::makeSound() const
{
	cout << BRIGHT_YELLOW << "WrongAnimal says: \"aaaaaa\"" << NORMAL << endl;
}

std::ostream& operator<<(std::ostream& out, WrongAnimal const& animal)
{
	out << "WrongAnimal's type is \"" << animal.getType() <<"\"";
	return (out);
}