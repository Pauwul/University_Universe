#include <iostream>

class Complex
{
private:
	int im, re;
public:
	Complex();
	Complex(int re, int im) : re(re), im(im) {};
	Complex(const Complex& c);
	void afisare();
	Complex operator+(const Complex& c);
};