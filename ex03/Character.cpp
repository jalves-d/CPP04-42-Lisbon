#include "Character.hpp"

Character::Character(void)
{
    this->name = "default";
    for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
    this->name = name;
    for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (inventory[i] != NULL)
            delete(inventory[i]);
}

Character &Character::operator=(const Character &cpy)
{
    if (this == &cpy)
        return (*this);
    (*this) = cpy;
    for (int i = 0; i < 4; i++)
        if (inventory[i] != NULL)
            delete(inventory[i]);
    for (int i = 0; i < 4; i++)
        inventory[i] = cpy.inventory[i];
    return (*this);
}

Character::Character(const Character &cpy)
{
    if (this != &cpy)
        (*this) = cpy;
    for (int i = 0; i < 4; i++)
        if (inventory[i] != NULL)
            delete(inventory[i]);
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

const std::string &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria *m)
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

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if (inventory[idx] != NULL)
            delete(inventory[idx]);
        else
            std::cout << "Not equiped" << std::endl;
    }
    else
        std::cout << "Invalid slot position !" << std::endl;
}

void Character::use(int idx, Character &target)
{
    if (idx >= 0 && idx < 4)
        inventory[idx]->use(target);
    else
        std::cout << "Invalid slot position !" << std::endl;
}
