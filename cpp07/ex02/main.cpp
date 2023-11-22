#include "array.h"

int main()
{
	Array<int> integers(12);
	Array<double> doubles(50);
	Array<double> doublesTwo;


	std::cout << integers;
	std::cout << doubles;
	std::cout << doublesTwo;

	std::cout << "intergers.size() = " << integers.size() << std::endl;
	std::cout << "doubles.size() = " << doubles.size() << std::endl;

	doublesTwo = doubles;

	std::cout << "doublesTwo.size() = " << doublesTwo.size() << std::endl;

	doubles[5] = 100.5;
	std::cout << "doubles[5] = " << doubles[5] << std::endl;

	doublesTwo[5] = doubles[5];
	std::cout << "doublesTwo[5] = " << doublesTwo[5] << std::endl;

	std::cout << integers;
	std::cout << doubles;
	std::cout << doublesTwo;
}