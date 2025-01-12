#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string.h>
#define CHAR_ARR_SIZE 4
class Character : public ICharacter
{
protected:
    AMateria    **m_inventory;
    int         m_flags[4];
    std::string m_name;
public:
    Character( void );
    Character( const Character &other );
    Character( const std::string &name );
    Character &operator=( const Character &other);
    virtual ~Character();
    std::string const & getName() const;
    void setName( const std::string &name) ;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};