#include "Cat.hpp"

Cat::Cat()
{
	cout << GREEN << "Cat has constructed" << NORMAL << endl;
	this->type_ = "cat";
	this->brain_ = new Brain();
}

Cat::~Cat()
{
	delete brain_;
	cout << RED << "Cat has destructed" << NORMAL << endl;
}

Cat::Cat(const Cat &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
	this->brain_ = new Brain(*original.brain_);
}

Cat &Cat::operator=(const Cat &original)
{
	cout << "New Cat is " << original.type_ << endl;
	if (this == &original)
		return (*this);
	this->type_ = original.type_;
	this->brain_ = new Brain(*original.brain_);
	return (*this);
}

void Cat::makeSound() const
{
	cout << BRIGHT_YELLOW << "Cat says: \"Meow\"" << NORMAL << endl;
}

void Cat::setIdea(const string& idea)
{
	this->brain_->setIdea(idea);
}

string Cat::getIdea(int num) const
{
	return (this->brain_->getIdea(num));
}

std::ostream& operator<<(std::ostream& out, Cat const& сat)
{
	out << "Cat's type is \"" << сat.getType() << "\"";
	return (out);
}
