#include "Cat.h"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	type = "Cat";
	std::cout << "[Cat] constructeur par defaut" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = other.type;
	std::cout << "[Cat] constructeur par copie" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);

	type = other.type;
	Animal::operator=(other);
	std::cout << "[Cat] affectation" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Animal] Destructeur" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaoooouuu!" << std::endl;
}
