#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat(const Cat& original);
	Cat& operator=(const Cat& original);

	void	makeSound() const;
};

std::ostream& operator<<(std::ostream& out, Cat const&);

#endif
