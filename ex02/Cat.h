#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include "Brain.h"
#include <string>

class Cat : public Animal
{
protected:
    Brain* m_brain;
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    virtual ~Cat();
    void makeSound( void ) const ;
};

#endif