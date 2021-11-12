#include "Animal.hpp"

Animal::Animal() : type_("default")
{
	cout << GREEN << "Default animal has constructed" << NORMAL << endl;
}

Animal::~Animal()
{
	cout << RED << "Animal has destructed" << NORMAL << endl;
}

Animal::Animal(string const& type) : type_(type)
{
	cout << GREEN << "New animal is " << type << NORMAL << endl;
}

Animal::Animal(const Animal &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
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

void Animal::makeSound() const
{
	cout << BRIGHT_YELLOW << "Animal says: \"aaaaaa\"" << NORMAL << endl;
}

std::ostream& operator<<(std::ostream& out, Animal const& animal)
{
	out << "Animal's type is \"" << animal.getType() <<"\"";
	return (out);
}