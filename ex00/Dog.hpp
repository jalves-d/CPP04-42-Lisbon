#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <ostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog(void);
        ~Dog(void);
        Dog &operator=(const Dog &cpy);
        Dog(const Dog &cpy);
        void    makeSound(void) const;
};

#endif