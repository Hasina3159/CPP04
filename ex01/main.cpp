#include "Animal.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main( void )
{
	const Animal* meta  = new Animal();
	const Animal* j     = new Dog();
	const Animal* i     = new Cat();

	WrongCat    w_c;
	WrongAnimal *w_a = &w_c;

	Cat    cat;
	Animal *animal = &cat;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i   	->makeSound(); //will output the cat sound!
	j   	->makeSound();
	meta	->makeSound();

	std::cout << "WRONG \n" << std::endl;
	w_a		->makeSound();
	w_c		.makeSound();

	std::cout << "OK \n" << std::endl;
	animal	->makeSound();
	cat 	.makeSound();

	return 0;
}
