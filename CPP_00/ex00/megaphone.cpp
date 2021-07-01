#include <iostream>

# define DEFAULT_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char *argv[])
{
	int i, j;
	std::locale loc;

	if (argc < 2)
	{
		std::cout << DEFAULT_MESSAGE << std::endl;
		return (0);
	}	
	j = 0;
	while (argv[++j])
	{	
		i = -1;
		while (argv[j][++i])
			std::cout << std::toupper(argv[j][i],loc);
	}
	std::cout << std::endl;
	return (0);
}
