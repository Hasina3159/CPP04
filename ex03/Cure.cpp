#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
    if (this == &other)
        return;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this == &other)
        return (*this);
    m_type = "cure";
    return (*this);
}

Cure::~Cure(void)
{
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName()  << "’s wounds *" << std::endl;
}
