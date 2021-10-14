#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <ostream>

class WrongAnimal{
    protected:
        std::string type;
    public :
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal &operator=(const WrongAnimal &cpy);
        WrongAnimal(const WrongAnimal &cpy);
        std::string getType(void);
        void    makeSound(void);
};

#endif