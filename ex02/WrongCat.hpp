#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <ostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
       WrongCat(void);
       ~WrongCat(void);
       WrongCat &operator=(const WrongCat &cpy);
       WrongCat(const WrongCat &cpy);
       std::string getType(void);
};

#endif