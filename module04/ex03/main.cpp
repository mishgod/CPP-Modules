#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* bob = new Character("bob");
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(2);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete tmp;
	delete me;

	cout << "----------------------------" << endl;

	Character* john = new Character("john");
	tmp = src->createMateria("ice");
	john->equip(tmp);
	john->use(0, *bob);

	Character* johnCopy = new Character("johnCopy");

	cout << "JohnCopy use before assigment: " << endl;
	johnCopy->use(0, *bob);
	*johnCopy = *john;
	cout << "JohnCopy's name is " << CYAN << johnCopy->getName() << NORMAL << endl;
	delete john;
	johnCopy->use(0, *bob);

	delete johnCopy;
	delete bob;
	delete src;
	return 0;
}
