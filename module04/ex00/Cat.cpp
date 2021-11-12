#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	cout << GREEN << "Cat has constructed" << NORMAL << endl;
}

Cat::~Cat()
{
	cout << RED << "Cat has destructed" << NORMAL << endl;
}

Cat::Cat(const Cat &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
}

Cat &Cat::operator=(const Cat &original)
{
	cout << "New Cat is " << original.type_ << endl;
	if (this == &original)
		return *this;
	this->type_ = original.type_;
	return (*this);
}

void Cat::makeSound() const
{
	cout << BRIGHT_YELLOW << "Cat says: \"Meow\"" << NORMAL << endl;
}

std::ostream& operator<<(std::ostream& out, Cat const& сat)
{
	out << "Cat's type is \"" << сat.getType() << "\"";
	return (out);
}
