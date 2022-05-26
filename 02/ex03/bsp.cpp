#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A, A1, A2, A3;
	A = Point::triangleArea(a, b, c);
	A1 = Point::triangleArea(a, b, point);
	A2 = Point::triangleArea(b, c, point);
	A3 = Point::triangleArea(c, a, point);
	return (A == A1 + A2 + A3);
}