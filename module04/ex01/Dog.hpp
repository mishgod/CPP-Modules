#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& original);
	Dog& operator=(const Dog& original);

	void	makeSound() const;
	void	setIdea(string const&);
	string	getIdea(int) const;

private:
	Brain* brain_;
};

std::ostream& operator<<(std::ostream& out, Dog const&);

#endif
