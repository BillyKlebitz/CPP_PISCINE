#include "Literals.hpp"
#include<cmath>
#include <float.h>

void	castChar(int src)
{
	std::cout 	<<	"char: ";
	if (src > 255 || src < 0)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(src)))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << static_cast<char>(src) << std::endl;
}

void	castChar(float src){

	std::cout 	<<	"char: ";
	if (src > 255 || src < 0)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(src)))
		
		std::cout << "non displayable" << std::endl;
	else
		std::cout << static_cast<char>(src) << std::endl;
}


void	castChar(double src){

	std::cout 	<<	"char: ";
	if (src > 255 || src < 0)
		std::cout << "impossible";
	else if (!std::isprint(static_cast<char>(src)))
		
		std::cout << "non displayable";
	else
		std::cout << static_cast<char>(src);
	std::cout << std::endl;
}


void	castInt(char src){
	
	std::cout << "int: "<< static_cast<int>(src) << std::endl;
}

void	castInt(float src){

	std::cout << "int: ";
	if (src > 2147483647. || src < -2147483648.)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(src);
	std::cout << std::endl;
}


void	castInt(double src){

	std::cout << "int: ";
	if (src > 2147483647 || src < -2147483648 )
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(src);
	std::cout << std::endl;
}

void	castFloat(char src){

	std::cout << "float: "<< static_cast<float>(src) << std::endl;

}
void	castFloat(int src){

	std::cout << "float: "<< static_cast<float>(src) << std::endl;
}
void	castFloat(double src){

	std::cout << "float: ";
	if (src > 3.402823e+38  || src < -3.402823e+38)
		std::cout << "impossible";
	else
		std::cout << static_cast<float>(src);
	std::cout << std::endl;
}

void	castDouble(char src){

	std::cout << "double: "<< static_cast<double>(src) << std::endl;
}

void	castDouble(int src){

	std::cout << "double: "<< static_cast<double>(src) << std::endl;
}

void	castDouble(float src){

	std::cout << "double: "<< static_cast<double>(src) << std::endl;
}

void	castChar(std::string error){

	std::cout << "char: " << error << std::endl;
}

void	castInt(std::string error){

	std::cout << "int: " << error << std::endl;
}

void	castFloat(std::string error){
	std::cout << "float: " << error << std::endl;
}	

void	castDouble(std::string error){
	std::cout << "double: " << error << std::endl;
}

void	LiteralChar::outputAllCasts(){
	
	char res = this->src[0];
	std::cout << "char: " << res << std::endl;
	castInt(res);
	castFloat(res);
	castDouble(res);
}

void	LiteralInt::outputAllCasts(){

	try
	{
		int res = std::stoi(src);
		castChar(res);
		std::cout << "int: " << src <<std::endl;
		castFloat(res);
		castDouble(res);
	}
	catch(std::out_of_range)
	{
		castChar("impossible");
		castInt("impossible");
		castFloat("impossible");
		castDouble("impossible");
	}

}

void	LiteralFloat::outputAllCasts(){

	try
	{
		if(src == "nanf" || src == "+inff" || src == "-inff")
		{
			std::string res = "nanf";
			castChar("impossible");
			castInt("impossible");
			std::cout << "float: "  << src <<std::endl;
			castDouble(src.substr(0,src.size()-1));
		}
		else
		{
			float res = std::stof(src);
			castChar(res);
			castInt(res);
			std::cout << "float: " << std::fixed << std::setprecision(1) << src  <<std::endl;
			castDouble(res);
	
		}	
	}
	catch(std::out_of_range)
	{
		castChar("impossible");
		castInt("impossible");
		castFloat("impossible");
		castDouble("impossible");
	}

}

void	LiteralDouble::outputAllCasts(){

	try
	{
		if(src == "nan" || src == "+inf" || src == "-inf")
		{
			std::string res = "nanf";
			castChar("impossible");
			castInt("impossible");
			castFloat(src + "f");
			std::cout << "double: " << src << std::endl;
		}
		else
		{
			double res = std::stod(src);
			castChar(res);
			castInt(res);
			castFloat(res);
			std::cout << "double: " << std::fixed << std::setprecision(1) << src  <<std::endl;
		}
	}
	catch(std::out_of_range)
	{
		castChar("impossible");
		castInt("impossible");
		castFloat("impossible");
		castDouble("impossible");
	}
}
