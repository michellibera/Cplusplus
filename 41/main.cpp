#include<iostream>
using namespace std;

int main()
{
	float x = 0;
	float h;
	float a, b;
	float fx = (2 * x*x) + (3 * x) + 5;

	cout << "podaj dolna granice przedzialu" << endl;
	cin >> a;
	cout << "podaj gorna granice przedzialu" << endl;
	cin >> b;
	cout << "podaj krok" << endl;
	cin >> h;

	x = a;
	while (x <= b)
	{
		fx = (2 * x*x) + (3 * x) + 5;
		cout << x << " " << fx << endl;
		x += h;
	}



	return 0;
}
