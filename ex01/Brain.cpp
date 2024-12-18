#include <string>
#include "Brain.h"

Brain::Brain()
{
	std::cout << "[Brain] constructeur par defaut" << std::endl;
}


Brain::Brain(const Brain &other) : ideas(other.ideas)
{
	std::cout << "[Brain] constructeur par copie" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "[Brain] affectation" << std::endl;
	if (this == &other)
		return (*this);
	ideas = other.ideas;
	return (*this);
}


Brain::~Brain()
{
	std::cout << "[Brain] Destructeur" << std::endl;
}
