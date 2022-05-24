#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	FixedPoint = (num << FractBits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	FixedPoint = (round(num * (1 << FractBits)));
}

Fixed::Fixed(const Fixed& other) : FixedPoint(other.FixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed other)
{
	FixedPoint = other.FixedPoint;	
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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

