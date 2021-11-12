#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(),  ScavTrap(), FragTrap()
{
	this->name_ = ClapTrap::name_;
	ClapTrap::name_ += "_clap_name";
	FragTrap::initHP();
	ScavTrap::initEP();
	FragTrap::initAD();
	cout << GREEN << "Default diamondTrap has collected" << NORMAL << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << RED << "DiamondTrap has dead" << NORMAL << endl;
}

DiamondTrap::DiamondTrap(string const& name) : ClapTrap(name),  ScavTrap(name), FragTrap(name)
{
	this->name_ = ClapTrap::name_;
	ClapTrap::name_ += "_clap_name";
	FragTrap::initHP();
	ScavTrap::initEP();
	FragTrap::initAD();
	cout << GREEN << "DiamondTrap " << name_ << " has collected" << NORMAL << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& original)
{
	cout << "DiamondTrap's clone of " << original.name_ << " is here" << NORMAL << endl;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& original)
{
	cout << "This is combat ClapTrap - DiamondTrap" << endl;
	if (this == &original)
		return *this;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	cout << "Am I " << PURPLE << ClapTrap::name_ << NORMAL << "? No, I am " << CYAN << name_ << NORMAL << "." << endl;
}