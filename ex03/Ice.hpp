#pragma once

#include "AMateria.hpp"
#include <string>

class Ice : public AMateria
{
public:
    Ice( void );
    Ice( const Ice &other);
    Ice &operator=( const Ice &other);
    virtual ~Ice( void );
    Ice* clone() const;
    virtual void use(ICharacter& target);
};