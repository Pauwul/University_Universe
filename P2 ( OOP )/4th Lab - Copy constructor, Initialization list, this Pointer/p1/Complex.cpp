#include<iostream>
#include "Complex.h"

Complex::Complex() {
	re = 0;
	im = 0;
	nr_obiecte++;
}

Complex::Complex(int* v) {
	re = v[0];
	im = v[1];
	nr_obiecte++;
}

Complex::Complex(int r, int i) {
	re = r;
	im = i;
	nr_obiecte++;
}

Complex::~Complex() {
	std::cout << "Destructor apelat: " << nr_obiecte << std::endl;
	nr_obiecte--;
}

Complex::Complex(const Complex& other) {
	std::cout << "S-a apelat functia de copiere" << std::endl;
	this->re = other.re;
	this->im = other.im;
}

Complex Complex::aduna(Complex c2) {
	Complex rez;
	rez.re = re + c2.re;
	rez.im = im + c2.im;
	return rez;
}
void Complex::afisare() {
	std::cout << "(" << re << "," << im << ")" << std::endl;
}

