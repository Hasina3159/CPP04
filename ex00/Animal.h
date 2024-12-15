#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    ~Animal();
    virtual void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif