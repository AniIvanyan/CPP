#pragma once
#include <algorithm>
#include <iostream>

template <typename T>

void easyFind(T container, int n)
{
	auto it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		std::cout << "Element " << n << " found at the position " << it - container.begin() << std::endl;
	else
		std::cout << "Element not found" << std::endl;
}