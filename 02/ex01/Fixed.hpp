#ifndef __FIXED_H__
#define __FIXED_H__
#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 				FixedPoint;
	static const int	FractBits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& other);
	Fixed& operator=(Fixed other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif // __FIXED_H__