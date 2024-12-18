#include "Cat.h"
#include <iostream>

Cat::Cat( void ) : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << "[Cat] constructeur par defaut" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain())
{
	type = other.type;
	std::cout << "[Cat] constructeur par copie" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	brain = new Brain();
	Animal::operator=(other);
	type = other.type;
	std::cout << "[Cat] affectation" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Animal] Destructeur" << std::endl;
	if (brain != nullptr)
		delete brain;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaoooouuu!" << std::endl;
}
