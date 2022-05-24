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

Fixed& Fixed::operator=(Fixed other)
{
	FixedPoint = other.FixedPoint;	
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
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