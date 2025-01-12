#pragma once
#include "IMateriaSource.hpp"
#define MAT_ARR_SIZE 4
class MateriaSource : public IMateriaSource
{
protected:
    int         m_flags[MAT_ARR_SIZE];
    AMateria    **m_materias;
public:
    MateriaSource( void );
    MateriaSource( const MateriaSource &other );
    MateriaSource &operator=( const MateriaSource &other );
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};