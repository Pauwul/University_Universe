#pragma once
#include <iostream>
#include <iomanip>

class Matrice
{
private:
	int nrC, nrL;
	int elemente[10][10];
public:
	void citire();
	void afisare();

	Matrice() : nrC(0), nrL(0), elemente() {};
	~Matrice();

	Matrice operator+(const Matrice&);
	Matrice operator-(const Matrice&);
	Matrice operator*(const Matrice&);
	bool operator==(const Matrice&);
	Matrice operator+(int x);
	Matrice operator~();
	Matrice operator++();
	Matrice operator++(int);
	int& operator[](int);


	//Extra
	friend std::ostream& operator<<(std::ostream& o, const Matrice& m);
	friend std::istream& operator>>(std::istream& i, Matrice& m);
};


