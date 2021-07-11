#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;

//	Animal* Zoo[100];
//	for (int n = 0; n < 100; n++)
//	{
//		if(n % 2)
//			Zoo[n] = new Dog();
//		else
//			Zoo[n] = new Cat();
//	}
//	for (int n = 0; n < 100; n++)
//		delete Zoo[n];
	Animal* a = new Cat();
	Animal* b = a;
	delete a;	
	b->makeSound();
	return (0);
}
