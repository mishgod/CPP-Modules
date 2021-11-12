#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default ScavTrap", 100, 50, 20)
{
	cout << "ScavTrap has collected" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap has dead" << endl;
}

ScavTrap::ScavTrap(string const& name) : ClapTrap(name, 100, 50, 20)
{
	cout << "ScavTrap has collected" << endl;
}

ScavTrap::ScavTrap(ScavTrap const& original)
{
	cout << "ScavTrap's clone of " << original.name_ << " is here" << endl;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& original)
{
	cout << "This is combat ClapTrap - ScavTrap" << endl;
	if (this == &original)
		return *this;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
	return (*this);
}

void	ScavTrap::attack(const string &target) const
{
	cout << BLUE << "ScavTrap " << this->name_ << " attack "<< target << ", causing " << this->attackDamage_ <<
	" points of damage!" << NORMAL << endl;
}

void	ScavTrap::guardGate() const
{
	cout << BRIGHT_YELLOW << "ScavTrap " << this->name_ << " is in guardgate's mode" << NORMAL << endl;
}