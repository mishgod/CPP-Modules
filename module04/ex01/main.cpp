#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* arr[6];
	for (int i = 0; i < 3; i++)
		arr[i] = new Cat();
	for (int i = 3; i < 6; i++)
		arr[i] = new Dog();
	cout << "----------------------------" << endl;
	cout << "It's time to make your sound" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < 6; i++)
		arr[i]->makeSound();
	cout << "----------------------------" << endl;
	for (int i = 0; i < 6; i++)
		delete arr[i];
	cout << "----------------------------" << endl;

	Cat* cat;
	cat = new Cat();
	cat->setIdea("I like fish");
	cout << cat->getIdea(0) << endl;
	cat->setIdea("I like meat");
	cout << cat->getIdea(0) << endl;
	cout << cat->getIdea(1) << endl;

	Cat* newCat;
	newCat = new Cat();
	*newCat = *cat;
	cout << CYAN << "Delete cat to check \"deep copy\"" << NORMAL << endl;
	delete(cat);
	cout << newCat->getIdea(0) << endl;
	newCat->setIdea("I like vegetables");
	newCat->setIdea("I like fruits");
	newCat->setIdea("I like cakes");
	cout << newCat->getIdea(0) << endl;
	cout << newCat->getIdea(1) << endl;
	cout << newCat->getIdea(2) << endl;
	cout << newCat->getIdea(3) << endl;
	cout << "-------add some ideas-------" << endl;
	for (int i = 0; i < 95; i++)
		newCat->setIdea("I like vegetables");
	cout << "0 " << newCat->getIdea(0) << endl;
	cout << "1 " << newCat->getIdea(1) << endl;
	cout << "2 " << newCat->getIdea(2) << endl;
	cout << "94 " << newCat->getIdea(94) << endl;
	cout << "95 " << newCat->getIdea(95) << endl;
	cout << "96 " << newCat->getIdea(96) << endl;
	cout << "97 " << newCat->getIdea(97) << endl;
	cout << "98 " << newCat->getIdea(98) << endl;
	cout << "99 " << newCat->getIdea(99) << endl;
	delete(newCat);

	return (0);
}