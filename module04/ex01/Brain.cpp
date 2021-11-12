#include "Brain.hpp"

Brain::Brain() : current_(0)
{
	cout << GREEN << "Brain constructor" << NORMAL << endl;
	this->ideas = new string[100];
	this->current_ = -1;
}

Brain::~Brain()
{
	delete [] this->ideas;
	cout << RED << "Brain destructor" << NORMAL << endl;
}

Brain::Brain(const Brain& copy)
{
	cout << "Copy your brain!" << endl;
	this->ideas = new string[100];
	this->current_ = -1;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	this->current_ = copy.current_;
}

Brain &Brain::operator=(const Brain & copy)
{
	if (this == &copy)
		return (*this);
	cout << "Overloaded operator assignment BRAIN" << endl;
	this->ideas = new string[100];
	this->current_ = -1;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	cout << ideas[0] << ' ' << copy.ideas[0] << endl;
	return (*this);
}

void Brain::setIdea(const string& idea)
{
	if (this->current_ < 100)
	{
		this->current_++;
		this->ideas[this->current_] = idea;
		return;
	}
	current_ = 0;
	this->ideas[this->current_] = idea;
}

string Brain::getIdea(int num) const
{
	int	tmp;
	if (this->current_ == -1)
	{
		cout << "No ideas yet" << endl;
		return ("");
	}
	if (num < 0 || num > 99)
	{
		cout << RED << "Error:" << NORMAL << " invalid number of idea" << endl;
		return ("");
	}
	tmp = this->current_ - num;
	if (tmp < 0)
		tmp += 100;
	return (this->ideas[tmp]);
}
