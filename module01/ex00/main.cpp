#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie* first = newZombie("Phil");
	Zombie* second = newZombie("Brian");
	randomChump("Pete");
	Zombie third = Zombie("Daniel");

	delete first;
	delete second;

	return 0;
}
