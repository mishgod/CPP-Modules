#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "../colors.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class ICharacter;

class AMateria {
protected:
	string	type_;

public:
	AMateria(string const& type);
	virtual ~AMateria() = 0;

	string const&		getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;

private:
	AMateria();
};


#endif
