#include "Data.hpp"

Data::Data(string const& name, int age, string const& city) :
name_(name), age_(age), city_(city)
{}

Data::Data(const Data &copy) :
name_(copy.name_), age_(copy.age_), city_(copy.city_)
{}

Data::~Data() {}

Data &Data::operator=(const Data &copy){
	if (this == &copy)
		return(*this);
	this->name_ = copy.name_;
	this->age_ = copy.age_;
	this->city_ = copy.city_;
	return(*this);
}

string Data::getName() const { return this->name_; }

int Data::getAge() const { return this->age_; }

string Data::getCity() const { return this->city_; }

std::ostream& operator<<(std::ostream& out, Data const& obj)
{
	out << "Name is: " << obj.getName() << ";" << endl;
	out << "Age is: " << obj.getAge() << ";" << endl;
	out << "City is: " << obj.getCity() << ";" << endl;
	return out;
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t	ret;
	char*		sName;
	int			sAge;
	char*		sCity;
	char*		out;

	out = new char[sizeof(char*) + sizeof(int) + sizeof(char*)];

	int i = (sizeof(char*) + sizeof(int) + sizeof(char*));
	cout << i << endl;

	sName = new char[ptr->getName().length() + 1];
	strcpy(sName, ptr->getName().c_str());
	memcpy(out, &sName, sizeof(char*));

	sAge = ptr->getAge();
	memcpy(out + sizeof(char*), &sAge, sizeof(int));

	sCity = new char[ptr->getCity().length() + 1];
	strcpy(sCity, ptr->getCity().c_str());
	memcpy(out + sizeof(char*) + sizeof(int), &sCity, sizeof(char*));
	ret = reinterpret_cast<uintptr_t>(out);
	return (ret);
}

Data* deserialize(uintptr_t raw)
{
	Data* data;

	char*	ptr;
	ptr = reinterpret_cast<char*>(raw);

	string	name(*(reinterpret_cast<char**>(ptr)));
	int		age = *(reinterpret_cast<int*>(ptr + sizeof(char*)));
	string	city(*(reinterpret_cast<char**>(ptr + sizeof(char*) + sizeof(int))));

	delete [] *(reinterpret_cast<char**>(ptr));
	delete [] *(reinterpret_cast<char**>(ptr + sizeof(char*) + sizeof(int)));

	data = new Data(name, age, city);
	return (data);
}