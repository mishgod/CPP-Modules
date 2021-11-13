# CPP Module 01

This module is designed to understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.

## ex 00

First, make a `Zombie class` with `announce` method. The zombies have a private name and are able to announce
themselves like:

    <name> BraiiiiiiinnnzzzZ...

Then write a function that will create a Zombie, name it, and return it to be
used somewhere else in your code. The prototype of the function is:

`Zombie* newZombie( std::string name );`

You will also have to write another function that will create a Zombie, and make it
announce itself. The prototype of the function is:

`void randomChump( std::string name );`

## ex01

Write a function that takes an integer `N`. When called, it allocates N Zombie objects.
It must allocate all the N Zombie objects in a single allocation. Then, it should initialize
each Zombie by giving to each one a name. Last, it should return the pointer to the first
Zombie. The function is prototyped as follows:

`Zombie* zombieHorde( int N, std::string name );`

## ex02

Make a program in which you will create a string containing `"HI THIS IS BRAIN"`.
Create a `stringPTR` which is a pointer to the string; and a `stringREF` which is a reference
to the string.

Now, display the address in memory of the string. Next, display the address of the
string by using `stringPTR` and `stringREF`.

Last, display the string using the pointer, and finally display it using the reference

## ex03

Make a `Weapon` class, that has a `type` string, and a `getType` method that returns a
const reference to this string. It also has a `setType`, of course!

Now, create two classes, `HumanA` and `HumanB`, that both have a `Weapon`, a `name`, and
an `attack()` function that displays:

`NAME attacks with his WEAPON_TYPE`

`HumanA` and `HumanB` are almost-almost the same; there are only two tiny-little-minuscule
details:

* While `HumanA` takes the `Weapon` in its constructor, `HumanB` doesn’t.
* `HumanB` may not always have a `Weapon`, but `HumanA` will ALWAYS be armed.

## ex04

Make a program called replace that takes a filename and two strings, let’s call them
s1 and s2, which are NOT empty.

It will open the file, and write its contents to FILENAME.replace, after replacing
every occurrence of s1 with s2.

All the member functions of the class std::string are allowed, except replace. Use
them wisely

## ex05

Create a class named `Karen` which will contain the following private member functions:
* void debug( void );
* void info( void );
* void warning( void );
* void error( void );

Karen also has to have a public function that calls to the private functions depending
on the level that is passed as parameter. The prototype of the function is:

`void complain( std::string level );`

Karen has to complain without using a forest of if/elseif/else.

## ex06

You have to write the program `karenFilter` that will receive as a parameter the log
level you want to listen to and display all the info that is at this level or above it. For
example:

```
$> ./karenFilter "WARNING"
[ WARNING ]
Warning!
[ ERROR ]
There is an ERROR!!!
```