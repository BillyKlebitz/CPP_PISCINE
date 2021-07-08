#ifndef FIXED_HPP 
#define FIXED_HPP 
#include <iostream>
#include <cmath>
class Fixed{

	public:

		Fixed();//canonical
		Fixed(Fixed const & src);//canonical
		Fixed(int const value);
		Fixed(float const value);
		float toFloat( void ) const;
		int toInt( void ) const;
		virtual ~Fixed();//canonical
		Fixed &		operator=(Fixed const &rhs);//canonical
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);

	private:
	
		int raw_bits;
		static const int fractional_bits = 8;
};

std::ostream	& operator<<(std::ostream & o, Fixed const &rhs);
#endif
