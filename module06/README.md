# CPP Module 06

This module is designed to understand the different casts in CPP.

## ex 00

### Scalar conversion

Write a program that takes a string representation of a C++ literal value (in its most
common form) as a parameter. This literal must belong to one of the following a scalar
types: `char`, `int`, `float` or `double`. Only the decimal notation will be used.

Examples of `char` literal values: _’c’, ’a’_... To simplify, please note that: non displayable characters can’t be passed as a parameter to your program, and if a conversion
to char is not displayable, output a notification instead.

Examples of `int` literal values: _0, -42, 42_...

Examples of `float` literal values: _0.0f, -4.2f, 4.2f_... You will also accept these
pseudo literals as well, you know, for science: _-inff, +inff_ and _nanf_.

Examples of `double` literal values: _0.0_, _-4.2, 4.2_... You will also accept these pseudo
literals as well, you know, for fun: _-inf, +inf_ and _nan_.

Your program must detect the literal’s type, acquire that literal in the right type (so
it’s not a string anymore), then convert it **explicitly** to each of the three other types and
display the results using the same formatting as below. If a conversion does not make
sense or overflows, display that the conversion is impossible. You can include any header
you need to handle numeric limits and special values.

```
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```

## ex01

### Serialization

Write a function `uintptr_t serialize(Data* ptr);`. This function will return
the parameter in an integer type.

Write a function `Data* deserialize(uintptr_t raw);`. This function will return
the raw data you created using `serialize` to a `Data` structure.

## ex02

### Identify real type

Create a class `Base` that only possesses a public virtual destructor. Create three
empty classes A, B and C that publicly inherit from `Base`.

Write a function `Base * generate(void);` that randomly instanciates A, B or C
and returns the instance as a `Base` pointer. Feel free to use anything you like for the
randomness.

Write a function `void identify(Base* p);` that displays "A", "B" or "C" according to the real type of p.

Write a function `void identify(Base& p);` You should never use a pointer inside
this function. that displays "A", "B" or "C" according to the real type of p.

Wrap these functions in a program that proves that everything works as intended.
`<typeinfo>` is forbidden.