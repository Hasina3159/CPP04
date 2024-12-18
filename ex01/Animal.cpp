#include "Animal.h"
#include <iostream>

Animal::Animal( void ) : type("Animal")
{
	std::cout << "[Animal] constructeur par defaut" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "[Animal] constructeur par copie" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);

	type = other.type;
	std::cout << "[Animal] affectation" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructeur" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (type);
}

void Animal::makeSound( void ) const
{
	std::cout << "!!!" << std::endl;
}
