#include <iostream>
#include "Zombie.hpp"

int main()
{
	std::cout << "FIRST HORDE" << std::endl;
	Zombie* horde1 = zombieHorde(5);
	std::cout << std::endl << "SECOND HORDE" << std::endl;
	Zombie* horde2 = zombieHorde(2);
	std::cout << std::endl << "FIRST HORDE HAS DESTROYED" << std::endl;
	delete [] horde1;
	std::cout << std::endl << "THIRD HORDE" << std::endl;
	Zombie* horde3 = zombieHorde(4);
	std::cout << std::endl << "SECOND HORDE HAS DESTROYED" << std::endl;
	delete [] horde2;
	std::cout << std::endl << "THIRD HORDE HAS DESTROYED" << std::endl;
	delete [] horde3;
	return 0;
}
