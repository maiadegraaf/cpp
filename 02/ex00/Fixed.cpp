#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	FixedPoint = raw;
}