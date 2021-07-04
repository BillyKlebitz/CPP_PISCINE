#ifndef FIXED_HPP 
#define FIXED_HPP 
#include <iostream>
#include <cmath>
class Fixed{

	private:
	
		int raw_bits;
		static const int fractional_bits = 8;

	public:

		Fixed();
		Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);
		float toFloat( void ) const;
		int toInt( void ) const;
		virtual ~Fixed();
		Fixed &		operator=(Fixed const &rhs);
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
};

std::ostream	& operator<<(std::ostream & o, Fixed const &rhs);
#endif
