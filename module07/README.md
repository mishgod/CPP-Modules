# CPP Module 07

This module is designed to understand Templates in CPP. Here I made some template functions, used it in functions and made template class `Array`.

## ex 00

Write the following function templates:
* `swap`: Swaps the values of two arguments. Does not return anything.
* `min`: Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.
* `max`: Compares the two arguments and returns the biggest one. If the two arguments
are equal, then it returns the second one.

## ex01

Write a function template `iter` that take 3 parameters and returns nothing. The first
parameter is the address of an array, the second one is the length of the array and the
third one is a function called for each element of the array.

## ex02

Write a class template `Array` that contains elements of type T and that allows the
following behavior:
* Construction with no parameter: creates an empty array.
* Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
display *a.)
* Construction by copy and assignment operator. In both cases, modifying one of
the two arrays after copy/assignment won’t affect anything in the other array.
* You MUST use the operator new[] for your allocation. You must not do preventive
allocation. Your code must never access non allocated memory.
* Elements are accessible through the operator[].
* When accessing an element with the operator[], if this element is out of the limits,
a std::exception is thrown.
* A member function size that returns the number of elements in the array. This
member function takes no parameter and does not modify the current instance in
any way.

