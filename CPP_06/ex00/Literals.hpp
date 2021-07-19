#include "ALiteral.hpp"

class LiteralChar : virtual public ALiteral{

	public:
		LiteralChar(std::string src) : ALiteral(src){}
		void	outputAllCasts();

};

class LiteralInt : public ALiteral{

	public:
		LiteralInt(std::string src) : ALiteral(src){}
		void	outputAllCasts();
};

class LiteralFloat : public ALiteral{

	public:
		LiteralFloat(std::string src) : ALiteral(src){}
		void	outputAllCasts();
};

class LiteralDouble : public ALiteral{

	public:
		LiteralDouble(std::string src) : ALiteral(src){}
		void	outputAllCasts();
};
