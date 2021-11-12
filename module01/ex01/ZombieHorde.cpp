#include "Zombie.hpp"

Zombie*	zombieHorde (int N)
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(rand() % 10);
		horde[i].announce();
	}
	return (horde);
}