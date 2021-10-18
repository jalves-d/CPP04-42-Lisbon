#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const &type);
        AMateria(void);
        virtual ~AMateria(void);
        AMateria &operator=(const AMateria &cpy);
        AMateria(const AMateria &cpy);
        const std::string &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif