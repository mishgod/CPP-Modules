#include "Character.hpp"

Character::Character(const string& name) : name_(name), amount_(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = 0;
}

Character::Character(const Character &copy) : name_(copy.name_), amount_(copy.amount_)
{
	for (int i = 0; i < this->amount_; i++)
		this->inventory_[i] = copy.inventory_[i]->clone();
	for (int i = this->amount_; i < 4; i++)
		this->inventory_[i] = 0;

}

Character::~Character()
{
	for (int i = 0; i < this->amount_; i++)
		delete this->inventory_[i];
}

Character &Character::operator=(const Character& copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < this->amount_; i++)
		delete (this->inventory_[i]);
	this->amount_ = copy.amount_;
	this->name_ = copy.name_;
	for (int i = 0; i < this->amount_; i++)
		this->inventory_[i] = copy.inventory_[i]->clone();
	for (int i = this->amount_; i < 4; i++)
		this->inventory_[i] = 0;
	return (*this);
}

void Character::equip(AMateria *m)
{
	if (this->amount_ == 4 || m == 0)
		return;
	this->inventory_[this->amount_++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > this->amount_ || this->inventory_[idx] == 0)
		return;
	for (int i = idx; i < this->amount_; i++)
	{
		this->inventory_[i] = this->inventory_[i + 1];
		this->inventory_[i + 1] = 0;
	}
	this->amount_--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0 || this->inventory_[idx] == 0)
		return;
	this->inventory_[idx]->use(target);
}

const string &Character::getName() const
{
	return (this->name_);
}
