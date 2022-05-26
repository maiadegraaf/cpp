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
	static Fixed	triangleArea(const Point a, const Point b, const Point c);
	static void	check_point( Point const a, Point const b, Point const c, Point const point);
};

#endif // __POINT_H__