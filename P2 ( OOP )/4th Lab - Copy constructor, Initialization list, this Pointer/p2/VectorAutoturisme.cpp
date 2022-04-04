#include "VectorAutoturisme.h"

void VectorAutoturisme::Citire()
{
	int n;
	std::cout << "Numar autoturisme = ";
	std::cin >> n;

	int an_fabricatie;
	std::string culoare;
	for (int index = 0; index < n; index++)
	{
		std::cout << "Masina " << index + 1 << ":\n";
		std::cout << "Culoare: ";
		std::cin >> culoare;
		std::cout << "An fabricatie: ";
		std::cin >> an_fabricatie;
		Autoturism a(culoare.c_str(), an_fabricatie);
		this->vec_auto.push_back(a);
	}
}

void VectorAutoturisme::AfisareVector()
{
	for (Autoturism a : this->vec_auto)
	{
		a.Afisare();
	}
}

void VectorAutoturisme::AfisareCelMaiNou()
{
	Autoturism celMaiNou("", 0);
	for (Autoturism a : this->vec_auto)
	{
		if (a.getAn() > celMaiNou.getAn())
		{
			celMaiNou = a;
		}
	}
	std::cout << "\nCel mai nou autovehicul: ";
	celMaiNou.Afisare();
}