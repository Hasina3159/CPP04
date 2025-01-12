#include <string>
#include <iostream>
#include "Brain.h"

Brain::Brain()
{
	std::cout << "[Brain] constructeur par defaut" << std::endl;
}


Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		 ideas[i] = other.ideas[i];
	std::cout << "[Brain] constructeur par copie" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "[Brain] affectation" << std::endl;
	if (this == &other)
		return (*this);

	for (int i = 0; i < 100; i++)
		 ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructeur" << std::endl;
}
