#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal born!" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal died!" << std::endl;
}

Animal &Animal::operator=(const Animal &cpy)
{
    if (this == &cpy)
    {
        std::cout << "This Animal exist!" << std::endl;
        return (*this);
    }
    type = cpy.type;
    std::cout << "Animal cloned born!" << std::endl;
    return(*this);
}

Animal::Animal(const Animal &cpy)
{
    if (this != &cpy)
    {
        type = cpy.type;
        std::cout << "Animal have your DNA copied and your clone born!" << std::endl;
    }
    else
        std::cout << "This Animal exist!" << std::endl;
}

std::string Animal::getType(void)
{
    return (type);
}
