#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB();
	HumanB(string const& name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack();

private:
	string	name_;
	Weapon* weapon_;

};


#endif
