#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(std::string const &type);
        Ice(void);
        ~Ice(void);
        Ice &operator=(const Ice &cpy);
        Ice(const Ice &cpy);
        const std::string &getType() const; //Returns the materia type
        AMateria* clone() const;
        void use(ICharacter &target);
};

#endif