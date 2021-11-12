#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

Weapon::Weapon(string const &name) : type_(name)
{}

void Weapon::setType(string const &type)
{
	this->type_ = type;
}

const string& Weapon::getType()
{
	return (this->type_);
}