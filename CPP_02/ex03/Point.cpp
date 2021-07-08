#include "Point.hpp"

Point::Point(){

	this->x = Fixed(0);
	this->y = Fixed(0);
};

Point::Point(float x, float y){

	this->x = Fixed(x);
	this->y = Fixed(y);
};

Point::Point(Point const &src){

	*this=src;
}


Point &	Point::operator=(Point const &src){

	this->x = src.x;	
	this->y = src.y;	
	return *this;
}

Fixed	Point::getX()
{
	return (this->x);
}

Fixed	Point::getY()
{
	return (this->y);
}

Point::~Point()
{
}
