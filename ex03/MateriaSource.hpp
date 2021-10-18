#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

class MateriaSource : IMateriaSource
{
    private :
        AMateria *inventory[4];
    public :
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource& operator=(const MateriaSource& cpy);
        MateriaSource(const MateriaSource& cpy);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const &type);
};

#endif