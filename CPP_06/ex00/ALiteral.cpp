#include "ALiteral.hpp"

ALiteral::ALiteral(std::string & src){

	this->src = src;
}

ALiteral & ALiteral::operator=(ALiteral & src){

	this->src = src.src;
	return  *this;
}

ALiteral::ALiteral(ALiteral & src){

	*this=src;
}
