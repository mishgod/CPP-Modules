#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Weapon
{
public:
	Weapon();
	Weapon(string const& name);
	~Weapon();

	void			setType(string const &type);
	const string&	getType();

private:
	string	type_;
};


#endif