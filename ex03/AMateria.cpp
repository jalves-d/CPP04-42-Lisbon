#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type =  type;
}

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &cpy)
{
    if (this == &cpy)
        return (*this);
    (*this) = cpy;
    return (*this);

}

AMateria::AMateria(const AMateria &cpy)
{
    if (this != &cpy)
        (*this) = cpy;
}

const std::string &AMateria::getType() const
{
    return this->type;
}