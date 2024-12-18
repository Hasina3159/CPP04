#include "Dog.h"
#include <iostream>

Dog::Dog( void ) : Animal(), brain(new Brain())
{
	type = "Dog";
	std::cout << "[Dog] constructeur par defaut" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain())
{
	type = other.type;
	std::cout << "[Dog] constructeur par copie" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	brain = new Brain();
	Animal::operator=(other);
	type = other.type;
	std::cout << "[Dog] affectation" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Animal] Destructeur" << std::endl;
	if (Brain != nullptr)
		delete brain;
}

void Dog::makeSound( void ) const
{
	std::cout << "Wooof wooof!" << std::endl;
}
