#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

template <typename T>
void	iter(T* array, int len, void foo(T& value))
{
	for (int i = 0; i < len; i++)
		foo(array[i]);
}


#endif