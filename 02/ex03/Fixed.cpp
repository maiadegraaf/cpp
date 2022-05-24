#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
}

Fixed::Fixed(const int num)
{
	FixedPoint = (num << FractBits);
}

Fixed::Fixed(const float num)
{
	FixedPoint = (round(num * (1 << FractBits)));
}

Fixed::Fixed(const Fixed& other) : FixedPoint(other.FixedPoint)
{
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(Fixed other)
{
	FixedPoint = other.FixedPoint;	
	return *this;
}

bool	Fixed::operator>(Fixed other) const
{
	return (FixedPoint > other.FixedPoint);
}

bool	Fixed::operator<(Fixed other) const
{
	return (FixedPoint < other.FixedPoint);
}

bool	Fixed::operator>=(Fixed other) const
{
	return (FixedPoint >= other.FixedPoint);
}

bool	Fixed::operator<=(Fixed other) const
{
	return (FixedPoint <= other.FixedPoint);
}

bool	Fixed::operator==(Fixed other) const
{
	return (FixedPoint == other.FixedPoint);
}

bool	Fixed::operator!=(Fixed other) const
{
	return (FixedPoint != other.FixedPoint);
}

Fixed Fixed::operator+(Fixed other) const
{
	return (Fixed(FixedPoint + other.FixedPoint));
}

Fixed Fixed::operator-(Fixed other) const
{
	return (Fixed(FixedPoint - other.FixedPoint));
}

Fixed Fixed::operator*(Fixed other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(Fixed other) const
{
	return (Fixed(toFloat() / other.toFloat()));;
}

Fixed Fixed::operator++(void)
{
	Fixed	tmp;
	++FixedPoint;
	tmp.FixedPoint = FixedPoint;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	FixedPoint++;
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	Fixed	tmp;
	--FixedPoint;
	tmp.FixedPoint = FixedPoint;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	FixedPoint--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.FixedPoint < b.FixedPoint)
		return a;
	return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.FixedPoint > b.FixedPoint)
		return a;
	return b;
}

int Fixed::getRawBits(void) const
{
	return (FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	FixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)FixedPoint / (float)(1 << FractBits));
}

int Fixed::toInt(void) const
{
	return (FixedPoint >> FractBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

