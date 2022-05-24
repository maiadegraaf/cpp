#ifndef __POINT_H__
#define __POINT_H__
#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed y;
public:
	Point() : x(0), y(0) {};
	Point(const float nX, const float nY) : x(Fixed(nX)), y(Fixed(nY)) {}; 
	Point(const Point &other) : x(other.x), y(other.y) {};
	~Point() {};
	Point& operator=(const Point &other);
	Fixed	side(Point a, Point b, Point point);
	Fixed	dot(Point a, Point b) {return (a.x * b.x + a.y * b.y);}
};

#endif // __POINT_H__