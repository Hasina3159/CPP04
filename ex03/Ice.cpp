#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
    if (this == &other)
        return;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this == &other)
        return (*this);
    m_type = "ice";
    return (*this);
}

Ice::~Ice(void)
{
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName()  << " *" << std::endl;
}
