#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : amount_(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->amount_; i++)
		delete (this->materia[i]);
}

MateriaSource::MateriaSource(const MateriaSource& copy) : amount_(copy.amount_)
{
	for (int i = 0; i < this->amount_; i++)
		this->learnMateria(copy.materia[i]);
	for (int i = this->amount_; i < 4; i++)
		this->materia[i] = 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& copy)
{
	for (int i = 0; i < this->amount_; i++)
		delete this->materia[i];
	this->amount_ = copy.amount_;
	for (int i = 0; i < this->amount_; i++)
		this->learnMateria(copy.materia[i]);
	for (int i = this->amount_; i < 4; i++)
		this->materia[i] = 0;
	return (*this);
}

AMateria *MateriaSource::createMateria(const string &type)
{
	for (int i = 0; i < this->amount_; i++)
	{
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (0);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m || amount_ == 4)
		return;
	for (int i = 0; i > this->amount_; i++)
	{
		if (this->materia[i] == m)
			return;
	}
	this->materia[this->amount_++] = m;
}