// ConsoleApplication32.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include<string> // do uzycia stringów
/*#include<sstream> // nag³ówek do zamiany int na string */

using namespace std;
int potegowanie(int a, int b)        
{
	int wynik;
	for (int i = 0; i <= b; i++)
	{
		if (i == 0)
			wynik = 1;
		if (i == 1)
			wynik = a;
		if (i > 1)
			wynik *= a;
	}
	return wynik;
	
	
}

int main()
{
	int a, b, wynik;
	cout << "Podaj podstawe liczby " << endl;
	cin >> a;
	cout << "Podaj wykladnik " << endl;
	cin >> b;

	wynik = potegowanie(a, b);
	cout << "wynik to " << wynik << endl;

	/*ostringstream ss;
	ss << wynik;
	string w = ss.str();*/

	string w = to_string(wynik);

	int k = 0;
	while (w[k] != NULL)
	{
		k++;
	}


	cout << "ostatnia cyfra tej liczby to " << w[k - 1] << endl;

	

	

	system("pause");
    return 0;
}

