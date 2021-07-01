#include <iostream>

int main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string&	stringREF = str;
	std::string*	stringPTR = &str;

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

