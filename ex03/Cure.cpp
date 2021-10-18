#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
    this->type =  type;
}

Cure::Cure()
{
    type =  "cure";
}

Cure::~Cure()
{

}

Cure &Cure::operator=(const Cure &cpy)
{
    if (this == &cpy)
        return (*this);
    (*this) = cpy;
    return (*this);
}

Cure::Cure(const Cure &cpy)
{
    if (this != &cpy)
        (*this) = cpy;
}


void Cure::use(ICharacter &target)
{
    std::cout << " heals " << target.getName() << " wounds " << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure(type);
    return (cure);
}

const std::string &Cure::getType() const
{
    return this->type;
}