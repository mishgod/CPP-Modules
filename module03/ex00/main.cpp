#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap mistake("CL4P-TP");

	mistake.attack("stairs");
	mistake.takeDamage(7);
	mistake.takeDamage(3);
	mistake.beRepaired(2);
	mistake.takeDamage(7);
	mistake.beRepaired(2);
	mistake.takeDamage(20);
	mistake.beRepaired(2);
	mistake.attack("stairs");
	mistake.beRepaired(20);
	cout << mistake << endl;

	ClapTrap mistake2(mistake);
	cout << mistake2 << endl;
	ClapTrap mistake_def;
	mistake_def = mistake2;
}