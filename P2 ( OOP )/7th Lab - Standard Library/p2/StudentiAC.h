#include <string>
#include <iostream>

class StudentAC
{
	std::string nume;
	int nota;
public:
	StudentAC();
	StudentAC(std::string nume, int nota);
	void afisare();
	void modificareNota(int nouaNota);

	bool operator< (const StudentAC& s);
};