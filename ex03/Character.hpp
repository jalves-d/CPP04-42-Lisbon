#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :
        AMateria *inventory[4];
        std::string name;
    public:
        ~Character();
        Character( void );
        Character(std::string name);
        Character &operator=(const Character &cpy);
        Character(const Character &cpy);
        const std::string &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Character& target);
};

#endif