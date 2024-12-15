#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include <string>

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();
    void makeSound( void ) const override;
};

#endif