# CPP Module 08

This module is designed to understand templated containers, iterators and algorithms in CPP.

## ex 00

Make a template function called `easyfind`, templated on a type T, that takes a T
and an int.

Assume the T is a container of int, and find the first occurrence of the second parameter in the first parameter.

If it can’t be found, handle the error either using an exception or using an error return
value. Take ideas from how standard containers work.

## ex01

Make a class in which you can store N ints. N will be an unsigned int, and will be
passed to the constructor as its only parameter.

This class will have a function to store a single number (addNumber), that will be used
to fill it. Attempting to add a new number if there are already N of them stored in the
object is an error and should result in an exception.

You will now make two functions, `shortestSpan` and `longestSpan`, that will find
out respectively the shortest and longest span between all the numbers contained in the
object, and return it. If there are no numbers stored, or only one, there is no span to
find, and you will throw an exception.

Below is a (way too short) example of a test main and its associated output. Of
course, your main will be way more thorough than this. You have to test at the very
least with 10000 numbers. More would be a good thing. It would also be very good if
you could add numbers by passing a range of iterators, which would avoid the annoyance
of making thousands of calls to `addNumber`...

## ex02

The `std::stack` container is VERY cool, but it’s one of the only STL containers that
is NOT iterable. That’s too bad. But why be okay with it, when we can simply play
God and just butcher it to add some stuff we like?

You will splice this ability into the `std::stack` container, to repair this grave injustice.

Make a `MutantStack` class, that will be implemented in terms of a `std::stack`, and
offer all of its member functions, only it will also offer an iterator.

