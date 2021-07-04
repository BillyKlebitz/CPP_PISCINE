#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->raw_bits = 0;
}

Fixed::Fixed(Fixed const & src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = value << this->fractional_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	
	int i = -1;
	int tmp = 1;
	while (++i < this->fractional_bits)
		tmp *= 2;
	this->raw_bits = roundf(value * tmp);
}

int Fixed::getRawBits( void ) const{

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

std::ostream	&operator<<(std::ostream & o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

float Fixed::toFloat( void ) const{
	
	int i = -1;
	int tmp = 1;
	while (++i < this->fractional_bits)
		tmp *= 2;

	return (((float)raw_bits / tmp));
}

int Fixed::toInt( void ) const{

	return raw_bits >> this->fractional_bits;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
