#include "AMateria.hpp"

AMateria::AMateria(string const& type) : type_(type)
{
}

AMateria::~AMateria()
{
}

const string &AMateria::getType() const
{
	return (this->type_);
}
