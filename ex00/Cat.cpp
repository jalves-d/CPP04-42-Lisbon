#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Cat born!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat died!" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
    if (this == &cpy)
    {   
        std::cout << "This Cat exist!" << std::endl;
        return (*this);
    }
    type = cpy.type;
    std::cout << "Cat cloned born!" << std::endl;
    return(*this);
}

Cat::Cat(const Cat &cpy)
{
    if (this != &cpy)
    {
        type = cpy.type;
        std::cout << "Cat have your DNA copied and your clone born!" << std::endl;
    }
    else
        std::cout << "This Cat exist!" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaw Meaw !" << std::endl;
}