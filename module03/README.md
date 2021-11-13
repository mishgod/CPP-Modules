# CPP Module 03

This module is designed to  understand Inheritance in CPP. There is also virtual inheritance and diamond problem.

## ex 00

The class will be called `ClapTrap`, and will have the following private attributes,
initialized to the specified values:
* Name (Parameter of constructor)
* Hitpoints (10)
* Energy points (10)
* Attack damage (0)

You will also give it a few public functions to make it more life-like:
* void attack(std::string const & target)
* void takeDamage(unsigned int amount)
* void beRepaired(unsigned int amount)

In all of these functions, you have to display something to describe what happens.
For example, the `attack` function may display something along the lines of:

`ClapTrap <name> attack <target>, causing <damage> points of damage!`

The constructor and destructor must also display something, so people can see they
have been called.

## ex01

The class will be named `ScavTrap`, and will inherit from `ClapTrap`, the constructor,
destructor, and attack have to use different outputs. After all, a Claptrap has to have
some measure of individuality.

The `ScavTrap` class will have its construction and destruction messages. Also, proper
construction/destruction chaining must be present.

ScavTrap will use the attributes of Claptrap (You need to change Claptrap accordingly)! And must initialize them to:
* Name (Parameter of constructor)
* Hitpoints (100)
* Energy points (50)
* attack damage (20)

ScavTrap will also have a new specific function: `void guardGate()`: this function
will display a message on the standard outputs to anounce that ScavTrap have enterred
in Gate keeper mode.

## ex02

Make a `FragTrap` class that inherits from ClapTrap.
* Name (Parameter of constructor)
* Hitpoints (100)
* Energy points (100)
* attack damage (30)

The `FragTrap` class will have its construction and destruction messages. Also, proper
construction/destruction chaining must be present.

The specific function for `FragTrap` will be `void highFivesGuys(void)` and will display a positive high fives request on the standard output.

## ex03

Create a monster by making a Claptrap that’s half Fragtrap, half ScavTrap.

It will be named `DiamondTrap`, and it will inherit from both the FragTrap AND the
ScavTrap.

Very risky and horrible act the DiamondTrap class will declare a private attribute
called name like the one inside ClapTrap.

Its attributes and functions will be chosen from either of its parent classes:
* Name (Parameter of constructor)
* Claptrap::Name (Parameter of constructor + "_clap_name")
* Hitpoints (Fragtrap)
* Energy points (Scavtrap)
* Attack damage (Fragtrap)
* attack (Scavtrap)