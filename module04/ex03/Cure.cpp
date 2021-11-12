#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &original) :  AMateria::AMateria(original.type_)
{}

Cure& Cure::operator=(const Cure &original)
{
	this->type_ = original.type_;
	return (*this);
}

void Cure::use(ICharacter &target)
{
	cout << GREEN << "* heals " << target.getName() << "’s wounds *" << NORMAL << endl;
}

AMateria* Cure::clone() const
{
	Cure* ret = new Cure();
	return (ret);
}
