#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "memory address of str:            " << &str << std::endl;
	std::cout << "memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
