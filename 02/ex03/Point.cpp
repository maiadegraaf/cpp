#include "Point.hpp"

Point& Point::operator=(const Point &other) 
{
	(void) other;
	std::cout << "Assignment of const impossible.  Default Constructor used." << std::endl;
	return *this;
}

Fixed	Point::side(Point a, Point b, Point point)
{
	return ((b.y - a.y) * (point.x - a.x) + ((b.x * -1) + a.x) * (point.y - a.y));
}

