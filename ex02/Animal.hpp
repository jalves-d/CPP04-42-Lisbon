#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <ostream>
#include "Brain.hpp"

class Animal{
    protected:
        std::string type;
    public :
        Animal(void);
        virtual ~Animal(void);
        Animal &operator=(const Animal &cpy);
        Animal(const Animal &cpy);
        std::string getType(void);
        virtual void    makeSound(void) = 0;
};

#endif
