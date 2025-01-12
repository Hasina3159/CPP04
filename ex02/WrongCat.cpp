#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "[WrongCat] constructeur par defaut" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	type = other.type;
	std::cout << "[WrongCat] constructeur par copie" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return (*this);

	type = other.type;
	WrongAnimal::operator=(other);
	std::cout << "[WrongCat] affectation" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongAnimal] Destructeur" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaoooouuu!" << std::endl;
}
