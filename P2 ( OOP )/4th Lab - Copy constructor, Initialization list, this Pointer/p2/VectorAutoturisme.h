#include "Autoturism.h"
#include <vector>
#include <iostream>
#include <string>

class VectorAutoturisme
{
private:
	std::vector<Autoturism> vec_auto;
public:
	void Citire();
	void AfisareVector();
	void AfisareCelMaiNou();
};