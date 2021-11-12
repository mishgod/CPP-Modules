#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("default ClapTrap"), hitpoints_(10), maxHitpoints_(10), energyPoints_(10), attackDamage_(0)
{
	cout << GREEN << "ClapTrap is ready to destroy enemies (not)" << NORMAL << endl;
}

ClapTrap::~ClapTrap()
{
	cout << RED << "ClapTrap has dead" << NORMAL << endl;
}

ClapTrap::ClapTrap(string const& name) :
name_(name), hitpoints_(10), maxHitpoints_(10), energyPoints_(10), attackDamage_(0)
{
	cout << GREEN << "ClapTrap is ready to destroy enemies (not)" << NORMAL << endl;
}

ClapTrap::ClapTrap(string const& name, unsigned int hitpoints, unsigned int energyPoints, unsigned int attackDamage) :
name_(name), hitpoints_(hitpoints), maxHitpoints_(hitpoints), energyPoints_(energyPoints), attackDamage_(attackDamage)
{
	cout << GREEN << "ClapTrap is ready to destroy enemies (not)" << NORMAL << endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	cout << "Clone of " << original.name_ << " is here" << endl;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &original)
{
	cout << "One more clone of ClapTrap..." << endl;
	if (this == &original)
		return *this;
	this->name_ = original.name_;
	this->attackDamage_ = original.attackDamage_;
	this->energyPoints_ = original.energyPoints_;
	this->hitpoints_ = original.hitpoints_;
	this->maxHitpoints_ = original.maxHitpoints_;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, ClapTrap const& clap)
{
	out << "ClapTrap's name: " << clap.getName() << ", HP: " << clap.getHitpoints() <<
	", EP: " << clap.getEnergyPoints();
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
	cout << BLUE << "ClapTrap " << this->name_ << " attack "<< target << ", causing " <<
	this->attackDamage_ << " points of damage!" << NORMAL << endl;
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
	cout << GREEN << "ClapTrap " << this->name_ << " has been repaired on " << amount <<
	" hitpoints" << NORMAL << endl;
	if (amount > this->maxHitpoints_ || (this->hitpoints_ + amount) > this->maxHitpoints_)
		this->hitpoints_ = this->maxHitpoints_;
	else
		this->hitpoints_ += amount;
}
