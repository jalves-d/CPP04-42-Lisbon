#ifndef AMATERIA_H
# define AMATERIA_H


#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria( void );
        AMateria( AMateria const &cpy);
        AMateria(std::string const & type);
        AMateria & operator=(AMateria const & cpy);
        virtual ~AMateria( void );
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
