#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created!" << std::endl;
}
Brain::~Brain(void)
{
    std::cout << "Brain destroyed!" << std::endl;
}
 Brain &Brain::operator=(const Brain &cpy)
{
    if (this == &cpy)
		return (*this);
	for (int i = 0; i < ideas->size(); i++)
		ideas[i] = cpy.ideas[i];
	return (*this);
}
Brain::Brain(const Brain &cpy)
{
    if (this != &cpy)
    {
	    for (int i = 0; i < ideas->size(); i++)
		    ideas[i] = cpy.ideas[i];
    }
}
std::string *Brain::getIdeas(void)
{
    return (ideas);
}