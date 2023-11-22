#pragma once
#include <iostream>
#include <fstream>


// this option will work also but we need to explicitely specify fun template argument. Example `iter(tab2, 5, print<Awesome>);
// template <typename T, typename F>
// void iter_temp(T *array, size_t length, F fun)
// {
// 	for (size_t i = 0; i < length; i++)
// 	{
// 		fun(array[i]);
// 	}
// };

template <typename T>
void iter(T *array, size_t length, void (*fun)(const T &))
{
	for (size_t i = 0; i < length; i++)
	{
		fun(array[i]);
	}
};