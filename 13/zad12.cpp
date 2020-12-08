#include<iostream>
using namespace std;
int main()
{
	float prog;
	float wyraz;
	float wynik = 0;
	int i = 1;

	cout << "Podaj prog" << endl;
	cin >> prog;

	do
	{
		wyraz = (1.0 / ((i*i) + 1));
		wynik += wyraz;
		i++;
		

	} while (wyraz >= prog);

	cout << "suma 1/(i^2 +1)= " << wynik << endl;

	system("pause");
	return 0;
}