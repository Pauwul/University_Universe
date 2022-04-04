#include "Multime.h"

Multime::Multime()
{
	this->nrElem = 10;
	for (int index = 0; index < this->nrElem; index++)
		this->elem[index] = index;
}

Multime::Multime(int* elem, int nrElem)
{
	this->nrElem = nrElem;
	for (int index = 0; index < this->nrElem; index++)
		this->elem[index] = elem[index];
}

Multime::Multime(int nrElem, int val)
{
	this->nrElem = nrElem;
	for (int index = 0; index < this->nrElem; index++)
		this->elem[index] = val + index;
}

Multime::~Multime()
{
	std::cout << "Destructor apelat cu succes!" << std::endl;
}

void Multime::Afisare()
{
	for (int index = 0; index < this->nrElem; index++)
		std::cout << this->elem[index] << " ";
	std::cout << std::endl;
}

bool Multime::Cautare(int val)
{
	for (int index = 0; index < this->nrElem; index++)
		if (this->elem[index] == val)
			return true;
	return false;
}

void Multime::Intersectie(const Multime& m1, const Multime& m2)
{
	this->nrElem = 0;
	for(int index1 = 0; index1<m1.nrElem; index1++)
		for(int index2 = 0; index2<m2.nrElem; index2++)
			if (m1.elem[index1] == m2.elem[index2])
			{
				this->elem[this->nrElem] = m1.elem[index1];
				this->nrElem++;
			}
	std::sort(this->elem, this->elem + this->nrElem);
}

void Multime::Reuniune(const Multime& m1, const Multime& m2)
{
	int index;
	this->nrElem = 0;

	for (index = 0; index < m1.nrElem; index++)
		if (!this->Cautare(m1.elem[index]))
		{
			this->elem[this->nrElem] = m1.elem[index];
			this->nrElem++;
		}

	for (index = 0; index < m2.nrElem; index++)
		if (!this->Cautare(m2.elem[index]))
		{
			this->elem[this->nrElem] = m2.elem[index];
			this->nrElem++;
		}
	std::sort(this->elem, this->elem + this->nrElem);
}