
#include "Point.hpp"

#include <iostream>

float Point::sign (Point p1, Point p2, Point p3)
{
	Fixed 	tmp;
	
	tmp = (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
	return tmp.toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = Point::sign(point, a, b);
    d2 = Point::sign(point, b, c);
    d3 = Point::sign(point, c, a);

    has_neg = (d1 < 0.0) || (d2 < 0.0) || (d3 < 0.0);
    has_pos = (d1 > 0.0) || (d2 > 0.0) || (d3 > 0.0);

    return !(has_neg && has_pos);

}

int main( void ) {
	
	Point	a(0.0, 0.0);
	Point	b(1.0,1.0);
	Point	c(0.0,1.0);
	Point 	i(0.5,0.6);

	std::cout << bsp(a,b,c,i);
	return 0;
}
