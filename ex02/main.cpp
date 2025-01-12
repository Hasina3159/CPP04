#include "Animal.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main( void )
{
	Animal **meta = new Animal*[ARRAY_SIZE];

	for (int i = 0; i < (ARRAY_SIZE / 2); i++)
		meta[i] = new Cat();
	for (int i = (ARRAY_SIZE / 2); i < ARRAY_SIZE; i++)
		meta[i] = new Dog();
	for (int i = 0; i < ARRAY_SIZE; i++)
		delete meta[i];
	delete[] meta;
	std::cout << "--------------------------------" << std::endl;
	Dog dog;
	{
		Dog another_dog = dog;
	}
	std::cout << "--------------------------------" << std::endl;
	return 0;
}
