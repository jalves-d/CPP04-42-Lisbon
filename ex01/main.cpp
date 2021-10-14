#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	Cat kinha;
	{
		Cat liza = kinha;
	}
	kinha.getBrain();
	Dog spike;
	
	spike.getBrain();
	spike.makeSound();
	kinha.makeSound();
}