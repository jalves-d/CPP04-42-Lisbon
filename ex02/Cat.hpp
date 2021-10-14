#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <ostream>
#include "Animal.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public :
       Cat(void);
       ~Cat(void);
       Cat &operator=(const Cat &cpy);
       Cat(const Cat &cpy);
       void    makeSound(void) const;
       Brain   *getBrain(void);
};

#endif