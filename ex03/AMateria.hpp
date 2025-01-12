#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string m_type;
public:
    AMateria( void );
    AMateria(std::string const & type);
    AMateria(const AMateria &other);
    virtual ~AMateria( void );
    AMateria &operator=( const AMateria &other );
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif