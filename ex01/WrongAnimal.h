#ifndef WRRONGANIMAL_H
# define WRRONGANIMAL_H

#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();
    void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif