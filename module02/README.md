# CPP Module 02

This module is designed to help you understand Ad-hoc polymorphism, overloads and orthodox canonical classes in CPP.
In this module I made class Fixed to do some Fixed-point arithmetic with numbers

## ex 00

Write an orthodox class to represent fixed point numbers:
* Private members:
  * An integer to store the fixed point value.
  * A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.
* Public members: 
  * A default constructor that initializes the fixed point value to 0.
  * A destructor.
  * A copy constructor.
  * An assignation operator overload.
  * A member function `int getRawBits( void ) const` that returns the raw
  value of the fixed point value.
  * A member function `void setRawBits( int const raw )` that sets the raw
  value of the fixed point value.

## ex01

Add to `Fixed` the following public constructors and public
member functions to your class:
* A constructor that takes a constant integer as a parameter and that converts it to
the correspondant fixed(8) point value. The fractional bits value is initialized like
in ex00.
* A constructor that takes a constant floating point as a parameter and that converts
it to the correspondant fixed(8) point value. The fractional bits value is initialized
like in ex00.
* A member function `float toFloat( void ) const` that converts the fixed point
value to a floating point value.
* A member function `int toInt( void ) const` that converts the fixed point value
to an integer value.

You will also add the following function overload to your header (declaration) and
source (definition) files:
* An overload to the `«` operator that inserts a floating point representation of the
fixed point value into the parameter output stream.

## ex02

Add the following public member operator overloads to your
class:
* Six comparison operators: `>`, `<`, `>=`, `<=`, `==` and `!=`.
* Four arithmetic operators: `+`, `-`, `*`, and `/`.
* The `pre-increment`, `post-increment`, `pre-decrement` and `post-decrement` operators,
  that will increment or decrement the fixed point value from the smallest representable  such as 1 +  > 1.

Add the following public static member functions overloads to your class:
* The static member function `min` that takes references on two fixed point values and
  returns a reference to the smallest value, and an overload that takes references on
  two constant fixed point values and returns a reference to the smallest constant
  value.
* The static member function `max` that takes references on two fixed point values
  and returns a reference to the biggest value, and an overload that takes references
  on two constant fixed point values and returns a reference to the biggest constant
  value.