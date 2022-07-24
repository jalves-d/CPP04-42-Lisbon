#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

	WrongAnimal* wrongmeta = new WrongAnimal();
	WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrongmeta->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << "---------------" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	wrongmeta->makeSound();
	k->makeSound();
	delete wrongmeta;
	delete k;

}
