#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	float x, n, g,suma=0 ,i;

	cout << "Podaj argument x=";
	cin >> x;

	cout << "Podaj n:";
	cin >> n;

	for ( i = 1; i <=n; i++)
	{
		g = pow(x,i)*pow(-1,(i-1));
		suma += g;
		
	}
	cout << suma<<endl;
	system("pause");
}