#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();

	void	announce (void);
	void	setName(int rand);

private:
	std::string name_;
};

Zombie*	zombieHorde(int N);

#endif
