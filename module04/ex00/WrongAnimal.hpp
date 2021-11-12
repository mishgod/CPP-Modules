#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

class WrongAnimal {
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(string const&);
	WrongAnimal(const WrongAnimal& original);
	WrongAnimal& operator=(const WrongAnimal& original);

	void	setType(string const&);
	string	getType() const;
	void	makeSound() const;

protected:
	string	type_;
};

std::ostream& operator<<(std::ostream& out, WrongAnimal const&);

#endif
