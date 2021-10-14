#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <ostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog(void);
        ~Dog(void);
        Dog &operator=(const Dog &cpy);
        Dog(const Dog &cpy);
        void    makeSound(void) const;
        Brain   *getBrain(void);
};

#endif