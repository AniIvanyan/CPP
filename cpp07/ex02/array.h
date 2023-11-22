#pragma once
#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
private:
	int arraySize;
	T *ptr;

public:
	Array() : arraySize(0), ptr(nullptr) {}
	Array(int size) : arraySize(size), ptr(new T[size]) {}
	Array(const Array &other) : arraySize(other.size()), ptr(new T[arraySize])
	{
		for (int i = 0; i < arraySize; ++i)
		{
			ptr[i] = other.ptr[i];
		}
	}
	const Array &operator=(const Array &rhs)
	{
		if (this == &rhs)
			return *this;
		else
		{
			if (arraySize != rhs.size())
			{
				delete[] ptr;
				arraySize = rhs.size();
				ptr = new T[arraySize];
			}

			for (int i = 0; i < arraySize; ++i)
			{
				ptr[i] = rhs.ptr[i];
			}
		}
		return *this;
	}
	~Array()
	{
		delete[] ptr;
	}
	int size() const { return arraySize; }
	T &operator[](int subscript) const
	{
		if (subscript < 0 || subscript >= arraySize)
			throw std::out_of_range("Index out of range");

		return ptr[subscript];
	}
};

template <typename U>
std::ostream &operator<<(std::ostream &output, const Array<U> &arr)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		output << arr[i];
		if (i != arr.size() - 1)
			output << ", ";
	}
	output << std::endl;
	return output;
}