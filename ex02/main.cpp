#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	Cat kinha;
	{
		Animal liza = kinha;
		liza.makeSound();
	}
	kinha.getBrain();
	Dog spike;
	
	spike.getBrain();
	spike.makeSound();
	kinha.makeSound();
}