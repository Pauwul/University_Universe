#include "StudentiAC.h"

StudentAC::StudentAC()
{
	nume = "";
	nota = -1;
}

StudentAC::StudentAC(std::string nume, int nota)
{
	this->nume = nume;
	this->nota = nota;
}

void StudentAC::afisare()
{
	std::cout << nume << "\t" << nota << std::endl;
}

void StudentAC::modificareNota(int nouaNota)
{
	nota = nouaNota;
}

bool StudentAC::operator<(const StudentAC& s)
{
	return this->nota < s.nota;
}
