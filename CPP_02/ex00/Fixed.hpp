#ifndef FIXED_HPP 
#define FIXED_HPP 
#include <iostream>

class Fixed{

	public:

		Fixed();//canonical
		Fixed(Fixed const & src);//canonical
		virtual ~Fixed();//canonical
		Fixed &		operator=(Fixed const &rhs);//canonical
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
	
	private:
	
		int raw_bits;
		static const int fractional_bits = 8;
};

#endif
