#include<iostream>
using namespace std;
int main()
{
	int wybor;
	float a, b , wynik;

	
		cout << "KALKUATOR" << endl;
		cout << "Menu:" << endl << "1.Dodawanie" << endl << "2.Odejmowanie" << endl << "3.Mnozenie" << endl << "4.Dzielenie" << endl;
		cout << "5.Aby wyjsc z programu" << endl;
		cin >> wybor;


		switch (wybor)
		{
		case 1:
		{
			cout << "wybrales dodawanie" << endl;
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga liczbe: ";
			cin >> b;

			wynik = a + b;
			cout << "Wynik to " << wynik << endl;



		}
		break;
		case 2:
		{
			cout << "wybrales odejmowanie" << endl;
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga liczbe: ";
			cin >> b;

			wynik = a - b;
			cout << "Wynik to " << wynik << endl;
		}
		break;
		case 3:
		{
			cout << "wybrales Mnozenie" << endl;
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga liczbe: ";
			cin >> b;

			wynik = a * b;
			cout << "Wynik to " << wynik << endl;
		}
		break;
		case 4:
		{
			cout << "wybrales dzielenie" << endl;
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga liczbe: ";
			cin >> b;
			while (b == 0)
			{
				cout << "nie dzielimy przez zero, wybierz inna liczbe ";
				cin >> b;
			}

			wynik = a / b;
			cout << "Wynik to " << wynik << endl;
		}
		break;

		case 5:
		{
			return 0;
		}
		break;

		default:
			cout << "Nie ma takiej opcji" << endl;


		}

		
	
	system("pause");
	return 0;
}