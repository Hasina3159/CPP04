#include "Cat.h"
#include <iostream>

Cat::Cat( void ) : Animal(), m_brain(new Brain())
{
	type = "Cat";
	std::cout << "[Cat] constructeur par defaut" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), m_brain(new Brain(*other.m_brain))
{
	type = other.type;
	std::cout << "[Cat] constructeur par copie" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	m_brain = new Brain(*other.m_brain);
	Animal::operator=(other);
	type = other.type;
	std::cout << "[Cat] affectation" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructeur" << std::endl;
	if (m_brain != NULL)
		delete m_brain;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaoooouuu!" << std::endl;
}
