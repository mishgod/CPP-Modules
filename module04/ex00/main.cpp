#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {

	{
		cout << "-----------DEFAULT-------------" << endl;
		Animal defaultAnimal;
		defaultAnimal.makeSound();
		cout << defaultAnimal << endl;
		cout << "-------------------------------" << endl;
	}

	{
		cout << "-------------CAT---------------" << endl;
		const Animal* cat1 = new Cat();
		cat1->makeSound();
		cat1->Animal::makeSound();
		cout << *cat1 << endl;
		delete cat1;
		cout << "-------------------------------" << endl;

	}

	{
		cout << "-------------DOG---------------" << endl;
		const Animal* dog = new Dog();
		dog->makeSound();
		cout << *dog << endl;
		delete dog;
		cout << "-------------------------------" << endl;
	}

	{
		cout << "-------------CAT---------------" << endl;
		const WrongAnimal* cat = new WrongCat();
		cat->makeSound();
		cout << *cat << endl;
		delete cat;
		cout << "-------------------------------" << endl;
	}
	return (0);
}