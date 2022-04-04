
#include "Multime.h"
#include <iostream>

int main()
{
    Multime a;
    
    int v[5] = { 10, 5, 0, -5, -10 };
    Multime b(v, 5);

    Multime c(10, 5);

    a.Afisare();
    b.Afisare();
    c.Afisare();

    Multime i, r;

    i.Intersectie(a, c);
    i.Afisare();

    r.Reuniune(b, c);
    r.Afisare();

    return 0;
}
