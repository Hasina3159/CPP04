#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include <string>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    void makeSound( void ) const override;
};

#endif