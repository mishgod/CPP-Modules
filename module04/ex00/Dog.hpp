#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog(const Dog& original);
	Dog& operator=(const Dog& original);

	void	makeSound() const;
};

std::ostream& operator<<(std::ostream& out, Dog const&);

#endif
