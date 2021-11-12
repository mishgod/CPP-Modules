#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include "../colors.hpp"
#include <cstring>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class Data {
public:
	Data(string const& name, int age, string const& city);
	Data(Data const& copy);
	~Data();

	string	getName() const;
	int		getAge() const;
	string	getCity() const;

	Data& operator=(Data const& copy);

private:
	Data();
	string	name_;
	int		age_;
	string	city_;
};

std::ostream& operator<<(std::ostream& out, Data const& obj);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
