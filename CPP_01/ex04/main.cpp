#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::ifstream	file(argv[1]);
	std::ofstream	replace((std::string)argv[1] + ".REPLACE");
	std::string 	str1 = (std::string)argv[2];
	std::string 	str2 = (std::string)argv[3];
	std::string		file_content;
	std::size_t		found;
	
	while (file)
	{
		std::getline(file, file_content);
		while((found = file_content.find(str1)) != str1.npos)
		{	
			file_content.erase(found,str1.length());
			file_content.insert(found,str2);
		}
		replace << file_content << std::endl;
	}
}
