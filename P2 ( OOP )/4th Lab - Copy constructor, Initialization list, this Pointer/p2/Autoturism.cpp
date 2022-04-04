#include "Autoturism.h"
#pragma warning(disable:4996)


Autoturism::Autoturism()
{
	this->culoare = "Alb";
	this->an_fabricatie = 2021;
	nr_autoturisme++;
}

Autoturism::Autoturism(char* culoare, unsigned int an_fabricatie)
{
	this->culoare = culoare;
	this->an_fabricatie = an_fabricatie;
	nr_autoturisme++;
}

Autoturism::Autoturism(const char* culoare, unsigned int an_fabricatie)
{
	this->culoare = culoare;
	this->an_fabricatie = an_fabricatie;
	nr_autoturisme++;
}

Autoturism::Autoturism(const Autoturism& other)
{
	this->culoare = other.culoare;
	this->an_fabricatie = other.an_fabricatie;
	nr_autoturisme++;
}
Autoturism::~Autoturism()
{

}

void Autoturism::Afisare()
{
	std::cout << "Masina este de culoare " << this->culoare << ", din anul " << this->an_fabricatie << ".\n";
}

void Autoturism::SchimbaCuloare(char* culoare)
{
	this->culoare = culoare;
}

int Autoturism::ComparaCuloare(const Autoturism& a1, const Autoturism& a2)
{
	return a1.culoare < a2.culoare;
}
