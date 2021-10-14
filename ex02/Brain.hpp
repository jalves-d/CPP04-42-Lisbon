#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <ostream>

class Brain
{
    private :
        std::string ideas[100];
    public :
       Brain(void);
       ~Brain(void);
       Brain &operator=(const Brain &cpy);
       Brain(const Brain &cpy);
       std::string *getIdeas(void);
};

#endif