#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap marauder("FR4G-TP");
	ScavTrap bandit("SC4V-TP");

	marauder.attack("stairs");
	marauder.takeDamage(59);
	marauder.takeDamage(59);
	marauder.takeDamage(3);
	marauder.beRepaired(2);
	marauder.takeDamage(7);
	marauder.beRepaired(2);
	marauder.takeDamage(4294967295);
	marauder.beRepaired(2);
	marauder.attack("gates");
	marauder.beRepaired(20);
	cout << marauder << endl;
	marauder.beRepaired(4294967295);
	cout << marauder << endl;
	marauder.highFivesGuys();
	cout << RED << "Critical error: all must die" << NORMAL << endl;
}