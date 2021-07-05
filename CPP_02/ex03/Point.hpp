#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{

	public:
		
		Point();
		Point(Point const & src);
		Point(float x, float y);
		virtual	~Point();
		Point &		operator=(Point const &src);
		Fixed	getX();
		Fixed	getY();
		static float sign (Point p1, Point p2, Point p3);

	private:
		Fixed	x;
		Fixed	y;

};

#endif
