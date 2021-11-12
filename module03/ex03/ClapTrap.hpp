#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

class ClapTrap {
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(string const&);
	ClapTrap(string const&, unsigned int, unsigned int, unsigned int);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);

	string			getName() const;
	unsigned int	getHitpoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	void			attack(string const& target) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:
	string				name_;
	unsigned int		hitpoints_;
	unsigned int		maxHitpoints_;
	unsigned int		energyPoints_;
	unsigned int		attackDamage_;
};

std::ostream& operator<<(std::ostream& out, ClapTrap const& ClapTrap);

#endif

