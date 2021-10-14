#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog born!" << std::endl;
}

Dog::~Dog(void)
{
    if (brain)
        delete(brain);
    std::cout << "Dog died!" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
    if (this == &cpy)
    {   
        std::cout << "This Dog exist!" << std::endl;
        return (*this);
    }
    type = cpy.type;
    if (brain)
        delete(brain);
    brain = new Brain(*cpy.brain);
    std::cout << "Dog cloned born!" << std::endl;
    return(*this);
}

Dog::Dog(const Dog &cpy)
{
    if (this != &cpy)
    {
        if (brain)
            delete(brain);
        brain = new Brain(*cpy.brain);
        type = cpy.type;
        std::cout << "Dog have your DNA copied and your clone born!" << std::endl;
    }
    else
        std::cout << "This Dog exist!" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Au Au Au, ruuuuuhr!" << std::endl;
}

Brain   *Dog::getBrain(void)
{
    return (brain);
}