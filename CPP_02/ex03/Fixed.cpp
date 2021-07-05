#include "Fixed.hpp"

Fixed::Fixed(){
	this->raw_bits = 0;
}

Fixed::Fixed(Fixed const & src){

	*this = src;
}

Fixed::Fixed(int const value)
{
	this->raw_bits = value << this->fractional_bits;
}

Fixed::Fixed(float const value)
{
	
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
	this->raw_bits = rhs.raw_bits;
	return *this;
}


Fixed	 Fixed::operator+(Fixed const rhs)
{
	Fixed tmp(*this);
	tmp.raw_bits += rhs.getRawBits();
	return tmp;
}

Fixed		Fixed::operator-(Fixed const rhs)
{
	Fixed tmp(*this);
	tmp.raw_bits -= rhs.getRawBits();
	return tmp;

}

Fixed	 Fixed::operator*(Fixed const rhs)
{
	Fixed tmp(*this);
	tmp.raw_bits *= rhs.getRawBits();
	return tmp;
}

Fixed		 Fixed::operator/(Fixed const &rhs)
{
	if (rhs.getRawBits() == 0)
	{
		std::cout << "zero exception" << std::endl;
		return *this;
	}
	Fixed tmp(*this);
	tmp.raw_bits *= rhs.getRawBits();
	return tmp;
}

bool 	Fixed::operator>(Fixed const &rhs){

	return (this->getRawBits() > rhs.getRawBits());
}

bool 	Fixed::operator<(Fixed const &rhs){

	return (this->getRawBits() < rhs.getRawBits());
}

bool 	Fixed::operator>=(Fixed const &rhs){

	return (this->getRawBits() >= rhs.getRawBits());
}

bool 	Fixed::operator<=(Fixed const &rhs){

	return (this->getRawBits() <= rhs.getRawBits());
}

bool 	Fixed::operator==(Fixed const &rhs){

	return (this->getRawBits() == rhs.getRawBits());
}

bool 	Fixed::operator!=(Fixed const &rhs){

	return (this->getRawBits() == rhs.getRawBits());
}


Fixed &		Fixed::operator++(){

	++this->raw_bits;
	return *this;
}

Fixed &		Fixed::operator--(){

	--this->raw_bits;
	return *this;
}

Fixed	Fixed::operator++(int){

	Fixed tmp; 
	tmp.setRawBits((float)this->raw_bits);	
	++this->raw_bits;
	return tmp; 
}

Fixed 	Fixed::operator--(int){

	Fixed tmp((float)this->raw_bits); 
	--this->raw_bits;
	return tmp; 
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
}
