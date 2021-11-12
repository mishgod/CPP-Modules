#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default FragTrap", 100, 100, 30)
{
	cout << "FragTrap has collected" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap has dead" << endl;
}

FragTrap::FragTrap(string const& name) : ClapTrap(name, 100, 100, 30)
{
	cout << "FragTrap has collected" << endl;
}

FragTrap::FragTrap(FragTrap const& original)
{
	cout << "FragTrap's clone of " << original.name_ << " is here" << endl;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
}

FragTrap& FragTrap::operator=(FragTrap const& original)
{
	cout << "This is combat ClapTrap - FragTrap" << endl;
	if (this == &original)
		return *this;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
	return (*this);
}

void	FragTrap::highFivesGuys() const
{
	cout << "FragTrap " << this->name_ << " says: " << BRIGHT_YELLOW << "Give me five, guys... Please......" << NORMAL << endl;
}