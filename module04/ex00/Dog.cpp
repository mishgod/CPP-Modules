#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	cout << GREEN << "Dog has constructed" << NORMAL << endl;
}

Dog::~Dog()
{
	cout << RED <<  "Dog has destructed" << NORMAL << endl;
}

Dog::Dog(const Dog &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
}

Dog &Dog::operator=(const Dog &original)
{
	cout << "New Dog is " << original.type_ << endl;
	if (this == &original)
		return *this;
	this->type_ = original.type_;
	return (*this);
}

void Dog::makeSound() const
{
	cout << BRIGHT_YELLOW << "Dog says: \"Woof! Woof! Rrrrrr..\"" << NORMAL << endl;
}

std::ostream& operator<<(std::ostream& out, Dog const& dog)
{
	out << "Dog's type is \"" << dog.getType() << "\"";
	return (out);
}
