#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>


Character::Character( void ) : m_inventory(new AMateria*[4]){
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
        m_flags[i] = 0;
}
Character::Character( const Character &other ) {
    if (this == &other)
        return;
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
    {
        if (other.m_flags[i] == 1)
        {
            m_inventory[i] = other.m_inventory[i]->clone();
            m_flags[i] = 1;
        }
        else
            m_flags[i] = 0;
    }
}

Character::Character(const std::string &name) : m_inventory(new AMateria*[4]), m_name(name)
{
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
        m_flags[i] = 0;
}

Character &Character::operator=( const Character &other) 
{
    if (this == &other)
        return (*this);
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
    {
        if (other.m_flags[i] == 1)
        {
            m_inventory[i] = other.m_inventory[i]->clone();
            m_flags[i] = 1;
        }
        else
            m_flags[i] = 0;
    }
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
    {
        if (m_flags[i] == 1)
        {
            m_flags[i] = 0;
            delete m_inventory[i];
        }
    }
    delete[] m_inventory;
}

std::string const & Character::getName() const 
{
    return (m_name);
}

void Character::setName(const std::string &name)
{
    m_name = name;
}

void Character::equip(AMateria *m)
{
    if (m == NULL)
        return;
    for (size_t i = 0; i < CHAR_ARR_SIZE; i++)
    {
        if (m_flags[i] == 0)
        {
            m_inventory[i] = m;
            m_flags[i] = 1;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < CHAR_ARR_SIZE && m_flags[idx] == 1)
        m_flags[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= CHAR_ARR_SIZE || m_flags[idx] != 1)
        return;
    
    m_inventory[idx]->use(target);    
}
