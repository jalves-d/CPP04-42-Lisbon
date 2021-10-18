#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    
}

MateriaSource::~MateriaSource()
{

}

MateriaSource &MateriaSource::operator=(const MateriaSource &cpy)
{
    if (this == &cpy)
        return (*this);
    (*this) = cpy;
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    if (this != &cpy)
        (*this) = cpy;
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;

    while (inventory[i] != NULL)
    {
        i++;
    }
    if (i != 4)
        inventory[i] = m;
    else
        std::cout << "Full Inventory !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    if (type == "ice")
        return (new Ice());
    else if (type == "cure")
        return (new Cure());
}