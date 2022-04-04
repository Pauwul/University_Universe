#include "Complex.h"

Complex::Complex()
{
	re = 0; 
	im = 0;
}

Complex::Complex(const Complex& c)
{
	this->re = c.re; 
	this->im = c.im;
}

void Complex::afisare()
{
	std::cout << this->re << " + " << this->im << "i\n";
}

Complex Complex::operator+(const Complex& c)
{
	return Complex(this->re + c.re, this->im + im);
}
