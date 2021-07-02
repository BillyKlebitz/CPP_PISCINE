#include "Karen.hpp"

int main()
{
	Karen women;
	std::string cmd;

	while (std::getline(std::cin, cmd))
	{
		women.complain(cmd);
	}
}
