#include "Literals.hpp"
#include <iostream>
#include <iomanip>

bool is_number(const std::string& s)
{
 	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;
	char * p;
	strtol(s.c_str(), &p, 10);
	return (*p == 0);
	//std::string::const_iterator it = s.begin()+1;
	//    //while (it != s.end() && std::isdigit(*it)) ++it;
	//        //return !s.empty() && it == s.end();
	//        }	
	//
}


bool is_float(const std::string& s)
{
	int number_of_dots = 0;	
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))// && *it == '.')
	{
		++it;
		if (*it == '.')
		{
			number_of_dots++;
			++it;
		}
	}
	if (*it == 'f')
	   it++;	
	return !s.empty() && it == s.end() && number_of_dots == 1;
}	

bool is_double(const std::string& s)
{
	int number_of_dots = 0;	
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))// && *it == '.')
	{
		++it;
		if (*it == '.')
		{
			number_of_dots++;
			++it;
		}
	}
	return !s.empty() && it == s.end() && number_of_dots == 1;
}

bool is_char(const std::string& s)
{
	if (s.length() == 1 && std::isprint(s[0]))
		return 1;
	return 0;
}

int	detectType(std::string str){

	if (is_char(str))
		return 3;
	if (is_number(str))
		return 0;
	if (is_float(str))
		return 1;
	if (is_double(str))
		return 2;
	return -1;
}

ALiteral *createLiteral(std::string	str)
{
	switch(detectType(str))
	{
		case 0:
			return (new LiteralInt(str));
		case 1:
			return (new LiteralFloat(str));
		case 2:
			return (new LiteralDouble(str));
		case 3:
			return (new LiteralChar(str));
	}
	return 0;
	//return (new LiteralChar(str));
}


int main(int argc, char *argv[]){

	//double res;

	if (argc != 2)
		return 1;
	ALiteral *literal = createLiteral(std::string(argv[1]));
	if (literal)
		literal->outputAllCasts();
	//res = std::stof(argv[1]);
	//std::cout.precision(5);
	//std::cout << "res: " << std::setw(5) << res << std::endl;
	//std::cout << "char: " << static_cast<char>(res) << std::endl;
	//std::cout << "int: " << static_cast<int>(res) << std::endl;
	//std::cout << "float: " << std::setprecision(6) <<static_cast<float>(res) << "f" << std::endl;
	//std::cout << "double: " << static_cast<double>(res) << std::endl;
	return 0;
}
