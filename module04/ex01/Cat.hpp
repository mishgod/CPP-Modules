#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& original);
	Cat& operator=(const Cat& original);

	void	makeSound() const;
	void	setIdea(string const&);
	string	getIdea(int) const;

private:
	Brain* brain_;
};

std::ostream& operator<<(std::ostream& out, Cat const&);

#endif
