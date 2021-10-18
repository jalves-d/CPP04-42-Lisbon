#include "Ice.hpp"

Ice::Ice(std::string const &type)
{
    this->type =  type;
}

Ice::Ice()
{
    type =  "ice";
}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &cpy)
{
    if (this == &cpy)   
        return (*this);
    (*this) = cpy;
    return (*this);

}

Ice::Ice(const Ice &cpy)
{
    if (this != &cpy)
        (*this) = cpy;
}

void Ice::use(ICharacter &target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice(type);
    return (ice);
}

const std::string &Ice::getType() const
{
    return this->type;
}