#include "Dog.hpp"

Dog::Dog()
{
	cout << GREEN << "Dog has constructed" << NORMAL << endl;
	this->type_ = "dog";
	this->brain_ = new Brain();
}

Dog::~Dog()
{
	delete brain_;
	cout << RED << "Dog has destructed" << NORMAL << endl;
}

Dog::Dog(const Dog &original)
{
	cout << "Clone of " << original.type_ << endl;
	this->type_ = original.type_;
	this->brain_ = new Brain(*original.brain_);
}

Dog &Dog::operator=(const Dog &original)
{
	cout << "New Dog is " << original.type_ << endl;
	if (this == &original)
		return (*this);
	this->type_ = original.type_;
	this->brain_ = new Brain(*original.brain_);
	return (*this);
}

void Dog::makeSound() const
{
	cout << BRIGHT_YELLOW << "Dog says: \"Woof\"" << NORMAL << endl;
}

void Dog::setIdea(const string& idea)
{
	this->brain_->setIdea(idea);
}

string Dog::getIdea(int num) const
{
	return (this->brain_->getIdea(num));
}

std::ostream& operator<<(std::ostream& out, Dog const& dog)
{
	out << "Dog's type is \"" << dog.getType() << "\"";
	return (out);
}
