#include "Ice.hpp"

//Ice::Ice() : AMateria::AMateria("ice")
Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &original) :  AMateria(original.type_)
{
}

Ice& Ice::operator=(const Ice &original)
{
	this->type_ = original.type_;
	return (*this);
}

void Ice::use(ICharacter &target)
{
	cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << NORMAL << endl;
}

AMateria* Ice::clone() const
{
	Ice* ret = new Ice();
	return (ret);
}