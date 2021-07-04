#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->raw_bits = 0;
}

Fixed::Fixed(Fixed const & src){

	std::cout << "Copy constructor called" << std::endl;
	this->raw_bits = src.getRawBits();
}

int Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

void	Fixed::setRawBits( int const raw ){

	this->raw_bits = raw;
}

Fixed	& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw_bits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
