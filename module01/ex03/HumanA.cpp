#include "HumanA.hpp"

HumanA::HumanA(string const& name, Weapon& weapon) : name_(name), weapon_(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	cout << name_ << " attacks with his " << this->weapon_.getType() << endl;
}