#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(string const& name, Weapon& weapon);
	~HumanA();

	void	attack();

private:
	string	name_;
	Weapon& weapon_;

};


#endif
