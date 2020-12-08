#include <iostream>
using namespace std;

int main()
{
	int wybor;
	int n,i;
	
	float suma = 0;
	cout << "Aby policzyc sume 1/(i+1) wcisnij 1. Wcisnij 2 by policzyc i/(i+1)" << endl;
	cin >> wybor;


	switch (wybor)
	{
	case 1:
	{
		cout << "podaj ilosc wyrazow: ";
		cin >> n;
		cout << "Petla for" << endl;

		for ( i = 1; i <= n; i++)
		{ 
			suma += (1.0 / (i + 1));
		}

		cout << "suma " << n << " wyrazow = " << suma<<endl;
		suma = 0;
		i = 1;

		cout << "petla while" << endl;

		while (i <= n)
		{
			suma +=( 1.0 / (i + 1));
			i++;
		}

		cout << "suma " << n << " wyrazow = " << suma << endl;
		suma = 0;
		i = 1;

		do
		{
			suma +=( 1.0 / (i + 1));
			i++;

		} while (i <= n);

		cout << "suma " << n << " wyrazow = " << suma << endl;
		suma = 0;
		i = 1;





	}break;

	case 2:
	{

		cout << "podaj ilosc wyrazow: ";
		cin >> n;
		cout << "Petla for" << endl;

		for (i = 1; i <= n; i++)
		{
			suma += (i*1.0/ (i + 1));
		}

		cout << "suma " << n << " wyrazow = " << suma << endl;
		suma = 0;
		i = 1;

		cout << "petla while" << endl;

		while (i <= n)
		{
			suma += (i*1.0 / (i + 1));
			i++;
		}

		cout << "suma " << n << " wyrazow = " << suma << endl;
		suma = 0;
		i = 1;

		do
		{
			suma += (i*1.0 / (i + 1));
			i++;

		} while (i <= n);

		cout << "suma " << n << " wyrazow = " << suma << endl;
		suma = 0;
		i = 1;


	}break;


	}


	system("pause");
	return 0;
}