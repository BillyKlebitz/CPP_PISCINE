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
		static const	Fixed & min(Fixed const &a, Fixed const &b);
		static const	Fixed & max(Fixed const &a, Fixed const &b);
		Fixed &		operator=(Fixed const &rhs);
		bool 		operator>(Fixed const &rhs);
		bool 		operator<(Fixed const &rhs);
		bool 		operator>=(Fixed const &rhs);
		bool 		operator<=(Fixed const &rhs);
		bool 		operator==(Fixed const &rhs);
		bool 		operator!=(Fixed const &rhs);
		Fixed 		operator+(Fixed const rhs);
		Fixed 		operator-(Fixed const rhs);
		Fixed 		operator*(Fixed const rhs);
		Fixed 		operator/(Fixed const &rhs);
		Fixed &		operator++();//prefix
		Fixed &		operator--();//prefix
		Fixed 		operator++(int);//postfix
		Fixed 		operator--(int);//postfix
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
};

std::ostream	& operator<<(std::ostream & o, Fixed const &rhs);
#endif
