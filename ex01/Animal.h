#ifndef ANIMAL_H
# define ANIMAL_H
# define ARRAY_SIZE 10
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();
    virtual void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif