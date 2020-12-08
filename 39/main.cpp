#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int i;
	int tab[10000];
	float suma=0;
	float srednia ;

	cout << "Podaj liczbe elementow tablicy (mniejsza od 10 000)" << endl;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "podaj " << i + 1 << " pomiar : ";
		cin >> tab[i];

		suma += tab[i];

	}

	srednia = (suma*1.0) / n;
	cout << "srednia wynosi = " << srednia << endl;

	cout << "pomiary rozniace sie o wiecej niz 20 procent to :" << endl;

	for (i = 0; i < n; i++)
	{
		if (tab[i] > (srednia*1.2) || tab[i] < (srednia*0.8))
			cout << tab[i]<<endl;
	}

	for (i = 0; i < n; i++)
	{
		cout<<"odchylenie standardowe dla "<<i+1<<" elementu="<< fabs(srednia-tab[i])<<endl;

	}



    return 0;
}
