#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(string const&);
	ScavTrap(ScavTrap const&);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const&);

	void	guardGate() const;
	void	attack(string const& target) const;
};


#endif
