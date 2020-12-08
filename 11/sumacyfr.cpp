#include<iostream>
#include<string>
//#include<sstream>
#include<cstdlib>
using namespace std;

int main()
{
	string cyfry;
	int suma = 0;

	cout << "wprowadz ciag cyfr ";
	cin >> cyfry;

	for (int i = 0; cyfry[i] != NULL; )
	{
		if (cyfry[i] == '-')
		{
			suma -= cyfry[i + 1] - '0';
			i += 2;
		}
		else
		{
			suma += cyfry[i] - '0';
			i++;
		}
		

		
	}

	
	
	cout << suma << endl;

	system("pause");
	return 0;
}