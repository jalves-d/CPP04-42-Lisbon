#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure(std::string const &type);
        Cure(void);
        ~Cure(void);
        Cure &operator=(const Cure &cpy);
        Cure(const Cure &cpy);
        const std::string &getType() const; //Returns the materia type
        AMateria* clone() const;
        void use(ICharacter &target);
};

#endif