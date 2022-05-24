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
			~Fixed();
	Fixed&	operator=(Fixed other);
	bool	operator>(Fixed other) const;
	bool	operator<(Fixed other) const;
	bool	operator>=(Fixed other) const;
	bool	operator<=(Fixed other) const;
	bool	operator==(Fixed other) const;
	bool	operator!=(Fixed other) const;
	Fixed	operator+(Fixed other) const;
	Fixed	operator-(Fixed other) const;
	Fixed	operator*(Fixed other) const;
	Fixed	operator/(Fixed other) const;
	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static	Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif // __FIXED_H__