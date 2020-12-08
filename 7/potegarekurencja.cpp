#include<iostream>
using namespace std;

long int potega(int a, int b)
{
	if (b == 1)
		return a;
	else
		return a*potega(a, b - 1);
}



int main()
{
	int a, b;
	cout << "podaj podstawe a nastepnie po spacji wykladnik ";
	cin >> a >> b;

	long int wynik = potega(a, b);
	cout << "Wynik z " << a << "do " << b << " to " << wynik << endl;

	system("pause");
	return 0;
}