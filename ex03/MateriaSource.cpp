#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : m_materias(new AMateria*[4])
{
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
        m_flags[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    if (this == &other)
        return;
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
    {
        m_flags[i] = other.m_flags[i];
        m_materias[i] = other.m_materias[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this == &other)
        return (*this);
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
    {
        m_flags[i] = other.m_flags[i];
        m_materias[i] = other.m_materias[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
    {
        if (m_flags[i] == 1)
        {
            delete m_materias[i];
        }
    }
    delete [] m_materias;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
    {
        if (m_flags[i] == 0)
        {
            m_flags[i] = 1;
            m_materias[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < MAT_ARR_SIZE; i++)
    {
        if (m_flags[i] == 1 && m_materias[i]->getType() == type)
        {
            return (m_materias[i]->clone());
        }
    }
    return (NULL);
}
