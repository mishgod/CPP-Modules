#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(string const&);
	DiamondTrap(DiamondTrap const&);
	~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap const&);

	void	whoAmI();

private:
	string	name_;
};


#endif