#include <iostream>
#include <iomanip>
#define NBR_OF_CNVRS 4

class ALiteral {

	public:
		ALiteral(std::string & src) = 0;
		ALiteral(ALiteral & src);
		ALiteral & operator=(ALiteral & src);
		virtual ~ALiteral(){};
		virtual void	outputAllCasts()=0;	
	protected:
		std::string		src;
};

