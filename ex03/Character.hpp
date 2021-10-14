#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        ~Character() {}
        const std::string &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Character& target);
};

#endif