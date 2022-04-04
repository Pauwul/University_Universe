#include <iostream>
#include "Matrice.h"

Matrice operator+(int x, Matrice& m) { return m + x; }

int main()
{
	Matrice a, b;
	a.citire();
	a.afisare();

	b.citire();
	b.afisare();

	std::cout << "a + b: " << std::endl;
	(a + b).afisare();

	std::cout << "a - b: " << std::endl;
	(a - b).afisare();

	Matrice c;
	c = b;

	std::cout << "a * c: " << std::endl;
	Matrice p = a * c;
	p.afisare();
	
	if (a == b)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a != b" << std::endl;

	std::cout << "a + 5: " << std::endl;
	(a + 5).afisare();

	std::cout << "2 + a: " << std::endl;
	(2 + a).afisare();

	std::cout << "a++: " << std::endl;
	(a++).afisare();

	std::cout << "++a: " << std::endl;
	(++a).afisare();

	Matrice d;
	std::cout << "Introduceti o matrice patratica: " << std::endl;
	d.citire();
	std::cout << "Inversa lui d: " << std::endl;
	(~d).afisare();

	std::cout << "Elementul 9 din produs: " << p[9] << std::endl;
	


	return 0;
}