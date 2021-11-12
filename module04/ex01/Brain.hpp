#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain {
public:
	Brain();
	virtual ~Brain();
	Brain(Brain const&);
	Brain& operator=(const Brain&);

	void	setIdea(string const&);
	string	getIdea(int) const;

private:
	string*	ideas;
	int		current_;
};


#endif
