#pragma once
#include <stdbool.h>
#include <iostream>
#include <algorithm>

class Multime
{
private:
	int nrElem;
	int elem[100];
public:
	Multime();
	Multime(int* elem, int nrElem);
	Multime(int nrElem, int val);
	~Multime();
	void Afisare();
	bool Cautare(int val);

	void Intersectie(const Multime& m1, const Multime& m2);
	void Reuniune(const Multime& m1, const Multime& m2);
};
