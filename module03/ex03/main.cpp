#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap super("SUP3R-TR4P");
	super.whoAmI();
	super.highFivesGuys();
	super.guardGate();
	super.attack("stairs");

	super.takeDamage(59);
	super.takeDamage(59);
	super.takeDamage(3);
	super.beRepaired(2);
	super.takeDamage(7);
	super.beRepaired(2);
	super.takeDamage(4294967295);
	super.beRepaired(2);
	super.attack("gates");
	super.beRepaired(20);
}