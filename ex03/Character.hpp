#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
		AMateria *inventory[4];

    public:
        ~Character();
        Character( void );
        Character(std::string const &name);
        Character & operator=(const Character &cpy);
        Character(const Character &cpy);
        const std::string &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, Character &target);
};

#endif
