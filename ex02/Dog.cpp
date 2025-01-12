#include "Dog.h"
#include <iostream>

Dog::Dog( void ) : Animal(), m_brain(new Brain())
{
	type = "Dog";
	std::cout << "[Dog] constructeur par defaut" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), m_brain(new Brain(*other.m_brain))
{
	type = other.type;
	std::cout << "[Dog] constructeur par copie" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	m_brain = new Brain(*other.m_brain);
	Animal::operator=(other);
	type = other.type;
	std::cout << "[Dog] affectation" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructeur" << std::endl;
	if (m_brain != NULL)
		delete m_brain;
}

void Dog::makeSound( void ) const
{
	std::cout << "Wooof wooof!" << std::endl;
}
