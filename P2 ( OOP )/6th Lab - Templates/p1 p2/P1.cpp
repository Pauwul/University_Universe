#include <iostream>
#include "Complex.h"

template <typename T>
T aduna(T a, T b)
{
	return a + b;
}


int main()
{
	std::cout << aduna(3, 4) << std::endl;
	std::cout << aduna(7.14, 3.25) << std::endl;
	Complex a(3, 3), b(1, 2);
	Complex c = aduna<Complex>(a, b);
	c.afisare();

	return 0;
}