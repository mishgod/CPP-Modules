#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal {
public:
	Animal();
	virtual ~Animal();
	Animal(string const&);
	Animal(const Animal& original);
	Animal& operator=(const Animal& original);

	void			setType(string const&);
	string			getType() const;
	virtual void	makeSound() const;

protected:
	string	type_;
};

std::ostream& operator<<(std::ostream& out, Animal const& Animal);

#endif
