#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << name_ << " has dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(int rand)
{
	std::string names[10];
	names[0] = "Angel";
	names[1] = "Asha";
	names[2]= "Ava";
	names[3] = "Commandant Steele";
	names[4] = "Dido";
	names[5] = "Lilith";
	names[6] = "Maya";
	names[7] = "Nyriad";
	names[8] = "Patricia Tannis";
	names[9] = "Tyreen Calypso";

	this->name_ = names[rand];
}