

#include "Autoturism.h"
#include "VectorAutoturisme.h"
#include <iostream>
#include <vector>

int Autoturism::nr_autoturisme = 0;

int main()
{
    VectorAutoturisme v;

    v.Citire();
    v.AfisareVector();
    v.AfisareCelMaiNou();

  
    return 0;
}

