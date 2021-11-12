#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;
using std::string;

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& original);
	WrongCat& operator=(const WrongCat& original);

	void	makeSound() const;
};

std::ostream& operator<<(std::ostream& out, WrongCat const&);

#endif
