#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

template <typename T>
void	swap(T& one, T& two)
{
	T tmp;

	tmp = one;
	one = two;
	two = tmp;
}

template <typename T>
T min(T& one, T& two)
{
	if (one < two)
		return (one);
	else
		return (two);
}

template <typename T>
T max(T& one, T& two)
{
	if (one < two)
		return (two);
	else
		return (one);
}

#endif
