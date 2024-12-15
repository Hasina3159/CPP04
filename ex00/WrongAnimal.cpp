#include "WrongAnimal.h"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] constructeur par defaut" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "[WrongAnimal] constructeur par copie" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return (*this);

	type = other.type;
	std::cout << "[WrongAnimal] affectation" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructeur" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "!!!" << std::endl;
}
