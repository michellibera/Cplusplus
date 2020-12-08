// ConsoleApplication38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int a, b;

	cout << "podaj  liczbe osob w pierwszej i drugiej grupe oddzielone spacja ";
	cin >> a >> b;
	
	int wynik = 1;
	int i=1;
		while (a%i != b%i)
		{
			wynik = i;
		}

		if (a >= b)
			cout << wynik*a << endl;
		else
			cout << wynik*b << endl;

		


	system("pause");
    return 0;
}

