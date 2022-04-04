#pragma once
#include <string.h>
#include <iostream>
#include <string>

class Autoturism
{
private:
	std::string culoare;
	unsigned int an_fabricatie;
public:

	Autoturism();
	Autoturism(char* culoare, unsigned int an_fabricatie);
	Autoturism(const char* culoare, unsigned int an_fabricatie);
	Autoturism(const Autoturism& other);
	~Autoturism();

	static int nr_autoturisme;

	void Afisare();
	void SchimbaCuloare(char* culoare);
	static int ComparaCuloare(const Autoturism& a1, const Autoturism& a2);
	int getAn() { return this->an_fabricatie; }
};
