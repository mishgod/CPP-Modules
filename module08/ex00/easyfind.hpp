#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <list>
#include <set>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

class ExceptionPolicy : public std::exception {
	const char* what() const throw();
};

const char *ExceptionPolicy::what() const throw()
{ return "Not found";}

template <class T>
int	easyfind(T& cont, int needFind)
{
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), needFind);
	if (it == cont.end())
		throw ExceptionPolicy();
	return (*it);
}

template <class Key, class Value>
int	easyfind(std::map<Key, Value>& cont, int needFind)
{
	typename std::map<Key, Value>::iterator it = cont.begin();
	typename std::map<Key, Value>::iterator end = cont.end();

	while (it != end && it->second != needFind)
		++it;
	if (it == end)
		throw ExceptionPolicy();
	return (it->second);
}

#endif
