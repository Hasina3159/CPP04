#include <iostream>
#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) : m_type(type) {}
AMateria::AMateria( void ) : m_type("Default_material") {}
AMateria::AMateria( const AMateria &other )  {
    if (this == &other)
        return;
}
AMateria::~AMateria(void)
{
}
AMateria &AMateria::operator=(const AMateria &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

std::string const & AMateria::getType() const {
    return (m_type);
}
void AMateria::use(ICharacter& target)
{
    if (!target.getName().empty())
        std::cout << m_type << ": \" Is doing something (maybe).\"" << std::endl;
}

