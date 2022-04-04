#include "StudentiAC.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void afiseazaStudenti(std::vector<StudentAC> v)
{
    std::vector<StudentAC>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        it->afisare();
}

std::vector<StudentAC> conversieVectorStud(StudentAC* arrayStudenti, int nrStud)
{
    std::vector<StudentAC> v(arrayStudenti, arrayStudenti + nrStud);
    return v;
}

int main()
{
    StudentAC* arrayS = new StudentAC[10];
    arrayS[0] = StudentAC("Lopata1", 4);
    arrayS[1] = StudentAC("Lopata2", 10);
    arrayS[2] = StudentAC("Lopata3", 3);

    std::vector<StudentAC> v = conversieVectorStud(arrayS, 3);

    std::sort(v.begin(), v.end());

    afiseazaStudenti(v);
    
    delete[] arrayS;
    return 0;
}