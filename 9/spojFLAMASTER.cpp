// ConsoleApplication37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{ 
	string wyraz;
	cout << "Podaj ciag liter" << endl;
	cin >> wyraz;

	int i = 0;
	int licznik = 1;
	while (wyraz[i] != NULL)
	{

		


		if (wyraz[i] == wyraz[i + 1])
			licznik++;
		else
		{
			if (licznik==1)
			{
				cout << wyraz[i];
			}
			if (licznik == 2)
			{
				cout << wyraz[i]<<wyraz[i];
			}
			if(licznik>2)
			{
				
					cout << wyraz[i]<<licznik ;
				
				
			}
			licznik = 1;
		}
	
		i++;
	}

	system("pause");
    return 0;
}

