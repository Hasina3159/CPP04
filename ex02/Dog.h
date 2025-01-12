#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include "Brain.h"
#include <string>

class Dog : public Animal
{
protected:
    Brain* m_brain;
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    virtual ~Dog();
    void makeSound( void ) const ;
};

#endif