#include "Matrice.h"

void Matrice::citire()
{
	std::cout << "Numar linii: ";
	std::cin >> this->nrL;
	std::cout << "Numar coloane: ";
	std::cin >> this->nrC;

	std::cout << "Elementele matricei: " << std::endl;

	for (int index1 = 0; index1 < this->nrL; index1++)
		for (int index2 = 0; index2 < this->nrC; index2++)
			std::cin >> this->elemente[index1][index2];
}

void Matrice::afisare()
{
	for (int index1 = 0; index1 < this->nrL; index1++)
	{
		for (int index2 = 0; index2 < this->nrC; index2++)
			std::cout << std::setw(5) << this->elemente[index1][index2];
		std::cout << std::endl;
	}			
	std::cout << std::endl;
}

Matrice::~Matrice()
{
	//std::cout << "Destructor apelat." << std::endl;
}

Matrice Matrice::operator+(const Matrice& m)
{
	Matrice newM;
	if (this->nrL != m.nrL || this->nrC != m.nrC)
	{
		std::cout << "Eroare! Matricele nu au aceeasi dimensiune." << std::endl;
	}
	else
	{
		newM.nrL = this->nrL;
		newM.nrC = this->nrC;

		for (int index1 = 0; index1 < this->nrL; index1++)
			for (int index2 = 0; index2 < this->nrC; index2++)
				newM.elemente[index1][index2] = this->elemente[index1][index2] + m.elemente[index1][index2];
	}
	return newM;
}

Matrice Matrice::operator-(const Matrice& m)
{
	Matrice newM;
	if (this->nrL != m.nrL || this->nrC != m.nrC)
	{
		std::cout << "Eroare! Matricele nu au aceeasi dimensiune." << std::endl;
	}
	else
	{
		newM.nrL = this->nrL;
		newM.nrC = this->nrC;

		for (int index1 = 0; index1 < this->nrL; index1++)
			for (int index2 = 0; index2 < this->nrC; index2++)
				newM.elemente[index1][index2] = this->elemente[index1][index2] - m.elemente[index1][index2];
	}
	return newM;
}

Matrice Matrice::operator*(const Matrice& m)
{
	Matrice newM;

	if (this->nrC != m.nrL)
	{
		std::cout << "Eroare! Matrici incompatibile." << std::endl;
	}
	else
	{
		newM.nrL = this->nrL;
		newM.nrC = m.nrC;

		for (int index1 = 0; index1 < newM.nrL; index1++)
			for (int index2 = 0; index2 < newM.nrC; index2++)
			{
				int sum = 0;
				for (int indexSum = 0; indexSum < this->nrC; indexSum++)
					sum += this->elemente[index1][indexSum] * m.elemente[indexSum][index2];
				newM.elemente[index1][index2] = sum;
			}
	}

	return newM;
}

bool Matrice::operator==(const Matrice& m)
{
	if (this->nrL != m.nrL || this->nrC != m.nrC)
		return false;
	else
	{
		for (int index1 = 0; index1 < this->nrL; index1++)
			for (int index2 = 0; index2 < this->nrC; index2++)
				if (this->elemente[index1][index2] != this->elemente[index1][index2])
					return false;
	}

	return true;
}

Matrice Matrice::operator+(int x)
{
	Matrice newM;

	newM.nrL = this->nrL;
	newM.nrC = this->nrC;

	for (int index1 = 0; index1 < this->nrL; index1++)
		for (int index2 = 0; index2 < this->nrC; index2++)
			newM.elemente[index1][index2] = this->elemente[index1][index2] + x;

	return newM;
}

Matrice Matrice::operator~()
{
	Matrice newM;

	newM.nrL = this->nrL;
	newM.nrC = this->nrC;

	for (int index1 = 0; index1 < newM.nrL; index1++)
		for (int index2 = 0; index2 < newM.nrC; index2++)
			newM.elemente[index1][index2] = this->elemente[index2][index1];

	return newM;
}

Matrice Matrice::operator++()
{
	for (int index = 0; index < this->nrC || index < this->nrL; index++)
		this->elemente[index][index] += 1;
	return *this;
}

Matrice Matrice::operator++(int)
{
	Matrice tempM = *this;
	for (int index = 0; index < this->nrC || index < this->nrL; index++)
		this->elemente[index][index] += 1;
	return tempM;
}

int& Matrice::operator[](int index)
{
	if (index >= this->nrL * this->nrC)
		std::cout << "Eroare! Index prea mare." << std::endl;
	
	return this->elemente[index / this->nrC][index % this->nrC];
}


//Extra
std::ostream& operator<<(std::ostream& o, const Matrice& m)
{
	for (int index1 = 0; index1 < m.nrL; index1++)
	{
		for (int index2 = 0; index2 < m.nrC; index2++)
			o  << m.elemente[index1][index2];
		o << std::endl;
	}
	o << std::endl;
	return o;
}

std::istream& operator>>(std::istream& i, Matrice& m)
{
	std::cout << "Numar linii: ";
	i >> m.nrL;
	std::cout << "Numar coloane: ";
	i >> m.nrC;

	std::cout << "Elementele matricei: " << std::endl;

	for (int index1 = 0; index1 < m.nrL; index1++)
		for (int index2 = 0; index2 < m.nrC; index2++)
			i >> m.elemente[index1][index2];
	return i;
}


