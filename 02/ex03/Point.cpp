#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

Point& Point::operator=(const Point &other) 
{
	(void) other;
	std::cout << "Assignment of const impossible.  Default Constructor used." << std::endl;
	return *this;
}

Fixed	Point::triangleArea(const Point a, const Point b, const Point c)
{
	Fixed ABx, ABy, ACx, ACy;
	ABx = b.x - a.x;
	ABy = b.y - a.y;
	ACx = c.x - a.x;
	ACy = c.y - a.y;
	Fixed ABxACy(ABx * ACy);
	Fixed ACxABy(ACx * ABy);
	Fixed Area(Fixed(ABxACy - ACxABy));
	Fixed HalfArea(Area/2);
	return (fabs(HalfArea.toFloat()));
}

void	Point::check_point( Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "Point(" << point.x << ", " << point.y << ") is ";
	if (!bsp(a, b, c, point))
		std::cout << "NOT ";
	std::cout << "in the triangle with vertices ";
	std::cout << "a(" << a.x << ", " << a.y << "), ";
	std::cout << "b(" << b.x << ", " << b.y << "), ";
	std::cout << "c(" << c.x << ", " << c.y << ")" << std::endl;

}