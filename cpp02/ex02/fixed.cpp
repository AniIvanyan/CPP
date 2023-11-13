#include "fixed.h"
#include <iostream>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num): value(num << frac)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num): value(std::roundf(num * (1 << frac)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << frac);
}

int Fixed::toInt(void) const
{
	return this->getRawBits() >> frac;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fp)
{
	output << fp.toFloat();
	return output;
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return !(*this > rhs);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return !(*this < rhs);
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return !(*this == rhs);
}

Fixed Fixed::operator+(const Fixed& rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	++(*this);
	return old;
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	--(*this);
	return old;
}

Fixed& Fixed::min(Fixed& fp1, Fixed& fp2)
{
	if (fp1 < fp2)
		return fp1;
	return fp2;
}

const Fixed& Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	if (fp1 < fp2)
		return fp1;
	return fp2;
}

Fixed& Fixed::max(Fixed& fp1, Fixed& fp2)
{
	if (fp1 > fp2)
		return fp1;
	return fp2;
}

const Fixed& Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
	if (fp1 > fp2)
		return fp1;
	return fp2;
}