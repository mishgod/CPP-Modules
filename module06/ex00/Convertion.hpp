#ifndef CONVERTION_HPP
#define CONVERTION_HPP

#include <iostream>
#include "../colors.hpp"
#include <cstdlib>
#include "math.h"

using std::cout;
using std::endl;
using std::string;

class Convertion {
public:
	Convertion(char* value);
	Convertion(Convertion const& copy);
	~Convertion();

	Convertion& operator=(Convertion const& copy);

	char* 	get_value() const;
	int		checkZero(string const& str, string const& type) const;
	void	toChar(char* value) const;
	void	toInt(char* value) const;
	void	toFloat(char* value) const;
	void	toDouble(char* value) const;

private:
	char*	value_;
	Convertion();
};

std::ostream& operator<<(std::ostream& out, Convertion const& obj);


#endif
