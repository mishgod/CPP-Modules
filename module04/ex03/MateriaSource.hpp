//
// Created by Reysen Booker on 10/5/21.
//

#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const&);
	MateriaSource& operator=(MateriaSource const&);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(string const&);

private:
	int	amount_;
	AMateria* materia[4];

};


#endif
