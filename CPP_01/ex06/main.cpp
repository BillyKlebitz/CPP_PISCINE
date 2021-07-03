#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen women;
	std::string cmd;

	if (argc == 2)
		women.complain(argv[1]);
	return (0);
}
