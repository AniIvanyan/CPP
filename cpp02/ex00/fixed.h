#pragma once

class Fixed
{
private:
	int num;
	static const int frac = 8;

public:
	Fixed();
	Fixed(Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};