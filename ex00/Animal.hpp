#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <ostream>

class Animal{
    protected:
        std::string type;
    public :
        Animal(void);
        ~Animal(void);
        Animal &operator=(const Animal &cpy);
        Animal(const Animal &cpy);
        std::string getType(void);
        virtual void    makeSound(void) const;
};

#endif