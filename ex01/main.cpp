#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Cat kinha;
	Cat *liza = new Cat(kinha);
	kinha.getBrain()->getIdeas();
	Dog spike;
	liza->makeSound();
	spike.getBrain()->getIdeas();
	spike.makeSound();
	kinha.makeSound();
	delete j;
	delete i;
}
