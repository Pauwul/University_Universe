#pragma once

class Complex {
private:
	int re, im;
public:
	static int nr_obiecte;
	Complex();
	Complex(int* nr);
	Complex(int r, int i);
	~Complex();
	Complex(const Complex& other);
	Complex aduna(Complex c2);
	void afisare();
};