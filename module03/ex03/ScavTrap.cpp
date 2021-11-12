#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	cout << GREEN << "ScavTrap has collected" << NORMAL << endl;
	this->name_ = "default ScavTrap";
	initHP();
	initEP();
	initAD();
}

ScavTrap::~ScavTrap()
{
	cout << RED << "ScavTrap has dead" << NORMAL << endl;
}

ScavTrap::ScavTrap(string const& name) : ClapTrap(name)
{
	cout << GREEN << "ScavTrap has collected" << NORMAL << endl;
	initHP();
	initEP();
	initAD();
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

void ScavTrap::initHP(void)
{
	this->hitpoints_ = 100;
	this->maxHitpoints_ = 100;
}

void ScavTrap::initEP(void)
{
	this->energyPoints_ = 50;
}

void ScavTrap::initAD(void)
{
	this->attackDamage_ = 20;
}