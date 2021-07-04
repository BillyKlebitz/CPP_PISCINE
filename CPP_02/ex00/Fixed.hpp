#ifndef FIXED_HPP 
#define FIXED_HPP 
#include <iostream>

class Fixed{

	private:
	
		int raw_bits;
		static const int fractional_bits = 8;

	public:

		Fixed();
		Fixed(Fixed const & src);
		virtual ~Fixed();
		Fixed &		operator=(Fixed const &rhs);
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif
