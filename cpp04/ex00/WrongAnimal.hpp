#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &og);
		WrongAnimal&	operator= (const WrongAnimal &og);
		~WrongAnimal();

		void	makeSound();
};

#endif