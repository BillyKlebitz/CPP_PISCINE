#include "Literals.hpp"


void	outputCastsWithFormat(char char_ltrl, int int_ltrl, float float_ltrl, double double_ltrl){

	std::cout
	   	<<	"char: " << char_ltrl << std::endl
		<<	"int: "	<< int_ltrl << std::endl
		<<	std::fixed << std::setprecision(1) << "float: " << float_ltrl<< 'f' << std::endl
		<< 	"double: "	<< double_ltrl << std::endl;
}

void	LiteralChar::outputAllCasts(){
	
	char res = this->src[0];
	outputCastsWithFormat(res, static_cast<int>(res), static_cast<float>(res), static_cast<double>(res));
	//std::cout
	//   	<<	"char: " << res << std::endl
	//	<<	"int: "	<< static_cast<int>(res) << std::endl
	//	<<	std::fixed << std::setprecision(1) <<	"float: " << static_cast<float>(res)<< 'f' << std::endl
	//	<< 	"double: "	<<  << std::endl;
}

void	LiteralInt::outputAllCasts(){

	try
	{
		int res = std::stoi(src);
		outputCastsWithFormat(static_cast<char>(res), res, static_cast<float>(res), static_cast<double>(res));
	//	std::cout
	//   	<<	"char: " << static_cast<char>(res) << std::endl
	//	<<	"int: "	<< res << std::endl
	//	<<	std::fixed << std::setprecision(1) <<	"float: " << static_cast<float>(res)<< 'f' << std::endl
	//	<< 	"double: "	<< static_cast<double>(res) << std::endl;
	}
	catch(std::out_of_range)
	{
	std::cout
   	<<	"char: " << "impossible" << std::endl
	<<	"int: "	<< "impossible" << std::endl
	<<	std::fixed << std::setprecision(1) <<	"float: " << "impossible" << std::endl
	<< 	"double: "	<< "impossible" << std::endl;
		//std::string res = "impossible";
		//outputCastsWithFormat(static_cast<char>(res), res, static_cast<float>(res), static_cast<double>(res));
	}

}

void	LiteralFloat::outputAllCasts(){

	float res = std::stof(src);
	outputCastsWithFormat(static_cast<char>(res), static_cast<int>(res), res, static_cast<double>(res));
	
	//std::cout
	//   	<<	"char: " << static_cast<char>(res) << std::endl;
	//std::cout	<<	"int: "	<< static_cast<int>(res) << std::endl
	//<<	std::fixed << std::setprecision(1) <<	"float: " << res << 'f'  << std::endl
	//	<< 	"double: "	<< static_cast<double>(res) << std::endl;

}

void	LiteralDouble::outputAllCasts(){

	double res = std::stod(src);
	outputCastsWithFormat(static_cast<char>(res), static_cast<int>(res), static_cast<double>(res), res);
	
	//std::cout
	//   	<<	"char: " << static_cast<char>(res) << std::endl
	//	<<	"int: "	<< static_cast<int>(res) << std::endl
	//	<< std::fixed << std::setprecision(1) <<	"float: " << static_cast<float>(res) << 'f'<<  std::endl
	//	<< 	"double: "	<< res << std::endl;
}
