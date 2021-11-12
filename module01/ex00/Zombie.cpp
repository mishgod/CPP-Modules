#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name_(name)
{
	announce();
};

Zombie::Zombie() : name_("Leeroy Jenkins")
{
}

Zombie::~Zombie()
{
	std::cout << name_ << " has dead" << std::endl;
}

void Zombie::announce() const
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}