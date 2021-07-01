
#include "my_awesome_phonebook.hpp"

Contact::Contact( void ){

	return;
}

Contact::~Contact( void ){

	return;
}

void Contact::AddInfo( void ){

	setFirstName();
	setLastName();
	setNickName();
	setPhoneNumber();
	setDarkestSecret();
	std::cout	<< "Contact added succesfully" << std::endl;
}

void Contact::PrintInfo(bool full){

	if (full == false)
	{
	std::cout	<< std::right
				<< std::setw(10) << truncate(getFirstName()) 
				<< "|"
				<< std::setw(10) << truncate(getLastName()) 
				<< "|"
				<< std::setw(10) << truncate(getNickName())
				<< "|"
				<< std::endl;
	}
	else
	{
		std::cout << getFirstName() << std::endl;
		std::cout << getLastName() << std::endl;
		std::cout << getNickName() << std::endl;
		std::cout << getPhoneNumber() << std::endl;
		std::cout << getDarkestSecret() << std::endl;
	}
}

/*	Getters	*/

std::string Contact::getFirstName ( void ){

	return (this->first_name);
}

std::string Contact::getLastName ( void ){

	return (this->last_name);
}

std::string Contact::getNickName ( void ){

	return (this->nickname);
}

std::string Contact::getPhoneNumber( void ){

	return (this->phone_number);
}

std::string Contact::getDarkestSecret( void ){

	return (this->darkest_secret);
}

/*	Setters	*/

void	Contact::setFirstName ( void ){

	std::cout	<< "Input first name" << std::endl;
	std::getline(std::cin, this->first_name);
}

void	Contact::setLastName ( void ){

	std::cout	<< "Input last name" << std::endl;
	std::getline(std::cin, this->last_name);
}

void	Contact::setNickName ( void ){

	std::cout	<< "Input nickname" << std::endl;
	std::getline(std::cin, this->nickname);
}

void	Contact::setPhoneNumber( void ){

	std::cout	<< "Input phone_number" << std::endl;
	std::getline(std::cin, this->phone_number);
}

void	Contact::setDarkestSecret( void ){

	std::cout	<< "Input darkest_secret" << std::endl;
	std::getline(std::cin, this->darkest_secret);
}
