#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bandit("SC4V-TP");

	bandit.attack("stairs");
	bandit.takeDamage(59);
	bandit.takeDamage(59);
	bandit.takeDamage(3);
	bandit.beRepaired(2);
	bandit.takeDamage(7);
	bandit.beRepaired(2);
	bandit.takeDamage(4294967295);
	bandit.beRepaired(2);
	bandit.attack("gates");
	bandit.guardGate();
	bandit.beRepaired(20);
	cout << bandit << endl;
	bandit.beRepaired(4294967295);
	cout << bandit << endl;
	cout << RED << "Critical error: all must die" << NORMAL << endl;
}