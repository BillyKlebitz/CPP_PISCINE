#include <iostream>

int main(int argc, char *argv[]){

	double res;

	if (argc != 2)
		return 1;
	res = atof(argv[1]);
	res = std::to_string(argv[1]);
	std::cout << "res: " << res << std::endl;
	std::cout << "char: " << static_cast<char>(res) << std::endl;
	std::cout << "int: " << static_cast<int>(res) << std::endl;
	std::cout << "float: " << static_cast<float>(res) << std::endl;
	std::cout << "double: " << static_cast<double>(res) << std::endl;
	return 0;
}
