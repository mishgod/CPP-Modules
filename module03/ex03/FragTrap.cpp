#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	cout << GREEN << "FragTrap has collected" << NORMAL << endl;
	this->name_ = "default FragTrap";
	initHP();
	initEP();
	initAD();
}

FragTrap::~FragTrap()
{
	cout << RED << "FragTrap has dead" << NORMAL << endl;
}

FragTrap::FragTrap(string const& name) : ClapTrap(name)
{
	cout << GREEN << "FragTrap has collected" << endl;
	initHP();
	initEP();
	initAD();
}

FragTrap::FragTrap(FragTrap const& original)
{
	cout << "FragTrap's clone of " << original.name_ << " is here" << NORMAL << endl;
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

//void	FragTrap::attack(const string &target) const
//{
//	cout << BLUE << "FragTrap " << this->name_ << " attack "<< target << ", causing " << this->attackDamage_ <<
//	" points of damage!" << NORMAL << endl;
//}

void	FragTrap::highFivesGuys() const
{
	cout << "FragTrap " << this->name_ << " says: " << BRIGHT_YELLOW << "Give me five, guys... Please......" << NORMAL << endl;
}

void FragTrap::initHP(void)
{
	this->hitpoints_ = 100;
	this->maxHitpoints_ = 100;
}

void FragTrap::initEP(void)
{
	this->energyPoints_ = 100;
}

void FragTrap::initAD(void)
{
	this->attackDamage_ = 30;
}