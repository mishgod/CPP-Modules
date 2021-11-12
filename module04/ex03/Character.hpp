#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character(string const&);
	virtual ~Character();
	Character(Character const&);
	Character& operator=(Character const&);

string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	Character();
	string		name_;
	int			amount_;
	AMateria*	inventory_[4];
};


#endif
