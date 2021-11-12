#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap();
	FragTrap(string const&);
	FragTrap(FragTrap const&);
	~FragTrap();
	FragTrap& operator=(FragTrap const&);

	void	highFivesGuys() const;
	void	initHP(void);
	void	initEP(void);
	void	initAD(void);
};


#endif
