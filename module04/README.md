# CPP Module 04

This module is designed to understand Subtype polymorphism, abstract classes and interfaces in CPP.

## ex 00

Create a simple and complete base class `Animal`.
The animal class got one protected attribute:

`std::string type;`

Create a class `Dog` that inherits from `Animal`.

Create a class `Cat` that inherits from `Animal`.

(for the animal class the type can be left empty or put at any value).

Every animal must be able to use the method `makeSound().` 
This method display an appropriate message on the standard outputs based on the
class.

This should output the specific makeSound of the `Dog` and `Cat` class, not the animal
one.

To be sure you create a `WrongCat` class that inherits a `WrongAnimal` class that output the WrongAnimal `makeSound()` when test under the same conditions.

## ex01

Reuse the Ex00 classes.

Create one class called `Brain`.
Brain contain an array of 100 std::string called `ideas`
Now, `Dog` and `Cat` have a private `Brain*` attribute.

Upon construction Dog and Cat initialize their Brain* with a new Brain();
Upon destruction Dog and Cat delete their Brain.

A copy of a Cat or Dog must be "deep".

## ex02

A general Animal doesn’t make sense after all.
For example, it makes no sound!
To avoid any future mistakes, the default animal class should not be instantiable.
Fix the Animal class so nobody instantiates it by mistakes.

## ex03

Complete the definition of the following `AMateria` class, and implement the necessary member functions.
```
class AMateria
{
protected:
[...]
public:
AMateria(std::string const & type);
[...]
std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};
```
Create the concrete Materias `Ice` and `Cure` . Their type is their name in
lowercase ("ice" for Ice, etc...).

Their `clone()` method return a new instance of the real Materia’s
type.

Regarding the `use(ICharacter&)` method, it’ll display:
* Ice: "* shoots an ice bolt at NAME *"
* Cure: "* heals NAME’s wounds *"

Create the Character class, which implement the following interface:
```
class ICharacter
{
public:
virtual ~ICharacter() {}
virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};
```

The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
equip the Materia in slots 0 to 3, in this order.

In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
Materia, don’t do a thing.

The `unequip` method must NOT delete Materia!

The `use(int, ICharacter&)` method have to use the Materia at the `idx` slot,
and pass `target` as parameter to the `AMateria::use` method.

`Character`  have a constructor taking its name as a parameter. Copy or
assignation of a `Character` must be deep. The old `Materia` of a `Character`
must be deleted. Same upon the destruction of a `Character`.

Create the `MateriaSource` class, which have to implement the following interface:
```

class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};
```
`learnMateria` must copy the Materia passed as a parameter, and store it in memory
to be cloned later. Much in the same way as for `Character` , the Source can know at
most 4 Materia, which are not necessarily unique.

`createMateria(std::string const &)` return a new Materia, which is a
copy of the Materia (previously learned by the Source) which type equals the parameter.
Returns 0 if the type is unknown.