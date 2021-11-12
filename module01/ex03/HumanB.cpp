#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(string const& name) : name_(name)
{}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon_ = &weapon;
}

void HumanB::attack()
{
	cout << name_ << " attacks with his " << this->weapon_->getType() << endl;
}
