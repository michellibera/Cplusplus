#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;


int main()
{
	float  fx,fa,fb,f0;
	float a;
	float b;
	float x0;
	float dokladnosc ;

	cout << "podaj przedzialy " << endl;
	cin >> a;
	cin >> b;
	cout << "podaj dokladnosc"<<endl;
	cin >> dokladnosc;

	fa = exp(a) - pow(a, 2) - 5 ;
	fb = exp(b) - pow(b, 2) - 5 ;

	for (;;)
	{

		x0 = (a + b) / 2;

		f0= exp(x0) - pow(x0, 2) - 5;

		if (fabs(f0) <= dokladnosc)
		{
			cout << "miejsce zerowe to" << x0 << " w= " << f0 << endl;
			break;
		}
		else
		{
			if (fa*f0 < 0)
			{
				b = x0;
				fb = f0;
			}
			if (f0*fb < 0)
			{   
				a = x0;
				fa = f0;
			}

		}
	}



	




	system("pause");
	return 0;
}