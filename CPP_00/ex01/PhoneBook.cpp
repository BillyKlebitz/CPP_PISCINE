#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	number_of_last = 0;
	number_of_oldest = 0;
	
	return;
}

void	PhoneBook::AddContact ( void ){

	////number_of_last = std::min(7, number_of_last);
	if (number_of_last == 8)
	{
		if(number_of_oldest > 7)
			number_of_oldest = 0;
		contacts[number_of_oldest].AddInfo();	
		number_of_oldest++;
		return;
	}	
	contacts[number_of_last].AddInfo();	
	if (number_of_last < 8)
		number_of_last++;
}

void	PhoneBook::SearchContact ( void ){

	int i;
	std::string index;
	for (i = 0; i < number_of_last; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		contacts[i].PrintInfo(false);
	}
	std::cout << "Input index:" << std::endl;
	std::cin >> i;
	if (std::cin.fail() || i < 1 || i > number_of_last)
	{
		std::cout << "Wrong index." << std::endl;	
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contacts[i-1].PrintInfo(true);
}
