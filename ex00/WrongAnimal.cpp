#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal born!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal died!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    if (this == &cpy)
    {   
        std::cout << "This WrongAnimal exist!" << std::endl;
        return (*this);
    }
    type = cpy.type;
    std::cout << "WrongAnimal cloned born!" << std::endl;
    return(*this);
}
WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    if (this != &cpy)
    {
        type = cpy.type;
        std::cout << "WrongAnimal have your DNA copied and your clone born!" << std::endl;
    }
    else
        std::cout << "This WrongAnimal exist!" << std::endl;
}

std::string WrongAnimal::getType(void)
{
    return (type);
}

void    WrongAnimal::makeSound(void)
{
    std::cout << "Shiiiiiiiish !" << std::endl;
}