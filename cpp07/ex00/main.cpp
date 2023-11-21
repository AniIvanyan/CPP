#include "whatever.h"
#include <iostream>

int main()
{
	int a = 3, b = 7;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std:: cout << max<int>(a, b) << std::endl;
	std:: cout << min<int>(a, b) << std::endl;

	std:: cout << max<double>(3.0, 7.0) << std::endl;
	std:: cout << min<char>('v', 'b') << std::endl;
}