#include <iostream>
#include <string>

int nrLitereMari(std::string s)
{
	int contor = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] > 'A' && s[i] < 'Z') //std::isupper(s[i]);
			contor++;
	return contor;
}

int nrCifre(std::string s)
{
	int contor = 0;
	for (std::string::iterator it = s.begin(); it != s.end(); it++)
		if (*it >= '0' && *it <= '9') //std::isdigit(*it)
			contor++;
	return contor;
}

int main()
{
	std::string s("HellO123!");
	std::cout << nrLitereMari(s) << std::endl << nrCifre(s);
	return 0;
}