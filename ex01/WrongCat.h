#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.h"
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    ~WrongCat();
    void makeSound( void ) const;
};

#endif