#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("default ClapTrap"), hitpoints_(10), energyPoints_(10), attackDamage_(0)
{
	cout << "ClapTrap is ready to destroy enemies (not)" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap has dead" << endl;
}

ClapTrap::ClapTrap(string const& name) : name_(name), hitpoints_(10), energyPoints_(10), attackDamage_(0)
{
	cout << "ClapTrap is ready to destroy enemies (not)" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	cout << "Clone of " << original.name_ << " is here" << endl;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &original)
{
	cout << "Now you are a ClapTrap and your name is " << original.name_ << endl;
	if (this == &original)
		return *this;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, ClapTrap const& clap)
{
	out << "ClapTrap's name: " << clap.getName() << ", HP: " << clap.getHitpoints() <<	", EP: " << clap.getEnergyPoints();
	return (out);
}

string	ClapTrap::getName() const
{
	return (this->name_);
}

unsigned int ClapTrap::getHitpoints() const
{
	return (this->hitpoints_);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints_);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage_);
}

void	ClapTrap::attack(const string &target) const
{
	cout << BLUE << "ClapTrap " << this->name_ << " attack "<< target << ", causing " << this->attackDamage_ << " points of damage!" << NORMAL << endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << RED << "ClapTrap " << this->name_ << " received " << amount << " damage" << NORMAL << endl;
	if (amount >= this->hitpoints_)
	{
		if (this->hitpoints_ != 0)
		{
			this->hitpoints_ = 0;
			cout << YELLOW << "ClapTrap has fallen on the ground\x1b[0m" << NORMAL << endl;
		}
	}
	else
		this->hitpoints_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << GREEN << "ClapTrap " << this->name_ << " has been repaired on " << amount << " hitpoints" << NORMAL << endl;
	if (amount > 10 || (this->hitpoints_ + amount) > 10)
		this->hitpoints_ = 10;
	else
		this->hitpoints_ += amount;
}
