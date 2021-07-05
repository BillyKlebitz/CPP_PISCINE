
#include "Fixed.hpp"

#include <iostream>


const	Fixed & Fixed::min(Fixed const &a, Fixed const &b){

	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const	Fixed & Fixed::max(Fixed const &a, Fixed const &b){

	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
