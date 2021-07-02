#ifndef KAREN_HPP
#define	KAREN_HPP
#include <iostream>

class	Karen{

typedef void(Karen::*funct)();
	public:
	
		void complain( std::string level );
	private:

			 
		int		calclevel(std::string level);
		void 	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		funct	levels[4];
};

#endif
