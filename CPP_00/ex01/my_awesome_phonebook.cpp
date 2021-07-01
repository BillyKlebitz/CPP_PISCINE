#include "my_awesome_phonebook.hpp"

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + '.');
	return (str);
}

int main()
{
	PhoneBook crappy;
	Contact contact;
	std::string	cmd;

	while (std::getline(std::cin, cmd))
	{
		if (cmd.compare("EXIT") == 0)
			break;
		if (cmd.compare("ADD") == 0)
			crappy.AddContact();
		if (cmd.compare("SEARCH") == 0)
			crappy.SearchContact();
	}
}
