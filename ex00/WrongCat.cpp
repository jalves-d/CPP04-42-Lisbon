#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat born!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat died!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
    if (this == &cpy)
    {   
        std::cout << "This WrongCat exist!" << std::endl;
        return (*this);
    }
    type = cpy.type;
    std::cout << "WrongCat cloned born!" << std::endl;
    return(*this);
}

WrongCat::WrongCat(const WrongCat &cpy)
{
    if (this != &cpy)
    {
        type = cpy.type;
        std::cout << "WrongCat have your DNA copied and your clone born!" << std::endl;
    }
    else
        std::cout << "This WrongCat exist!" << std::endl;
}

std::string WrongCat::getType(void)
{
    return (type);
}