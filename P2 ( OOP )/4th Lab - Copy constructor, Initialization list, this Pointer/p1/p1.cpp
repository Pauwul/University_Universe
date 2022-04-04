#include "Complex.h"
#include <iostream>

int Complex::nr_obiecte = 0;

int main() {
	

	Complex c1(5, 3);
	Complex c2(2, -3);
	Complex c3;


	c3 = c1.aduna(c2);
	c1.afisare();
	c2.afisare();
	c3.afisare();

	return 0;
}