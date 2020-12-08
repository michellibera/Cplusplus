
#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    for (;;)
    {

        float pi = 3.14;
        int wybor;
        float a = 0;
        float b = 0;
        float c = 0;
        float a1 = 0;
        float b1 = 0;
        float c1 = 0;
        float w;
        float wx;
        float wy;
        float wynik;
        float x1;
        float x2;
        float p = (sqrt((c*c) + (b*b)));
        float q = (sqrt((a*a) + (c*c)));
        float l = (sqrt((a*a) + (b*b)));
        int i;
        int j;
        int k;
        int n;
        int m;
        float suma = 0;
        float suma1 = 0;
        float suma2 = 0;
        float suma3 = 0;
        float suma4 = 0;
        int x;

        cout << "KALKUATOR" << endl;

        cout << "Menu:" << endl << "0.Aby wyjsc z programu" << endl << "1.Dodawanie" << endl << "2.Odejmowanie" << endl;
        cout << "3.Mnozenie" << endl << "4.Dzielenie" << endl;
        cout << "5.Rownanie kwadratowe" << endl << "6.Trojkat" << endl;
        cout << "7.Objetosc kuli" << endl<< "8.Objetosc stozka" << endl << "9.Objetosc walca" << endl;
        cout << "10.Srednia ciagu" << endl << "11.Silnia" << endl << "12.NWD dwoch liczb" << endl;
        cout << "13. Uklad 2 rownan metoda Cramera" << endl;
        cout<<"14.Macierze"<<endl;


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

        case 0:
        {
            return 0;
        }
        break;

        case 5:
        {
            cout << "Podaj wspolczynnik a= ";
            cin >> a;
            cout << "Podaj wspolczynnik b= ";
            cin >> b;
            cout << "Podaj wspolczynnik c= ";
            cin >> c;

            float delta = pow(b, 2)-(4*a*c);

            if (delta > 0)
            {
                x1 = (-b - sqrt(delta)) / 2 * a;
                x2 = (-b + sqrt(delta)) / 2 * a;

                cout << "rownanie ma 2 rozwiazania : x1= " << x1 << " oraz x2= " << x2 << endl;
            }
            if (delta == 0)
            {
                x1 = (-b) / (2 * a);

                cout << "rownanie ma 1 rozwiazania : x1= " << x1 << endl;
            }
            if (delta < 0)
            {
                cout << "rownanie nie ma rozwiazan" << endl;
            }

        }
        break;

        case 6:
        {
            cout << "Podaj bok a= ";
            cin >> a;
            cout << "Podaj bok b= ";
            cin >> b;
            cout << "Podaj bok c= ";
            cin >> c;

            if (a >= b && a >= c)
            {
                if ( b + c > a)
                {
                    cout << "Mozna zbudowac taki trojkat" << endl;

                    if (a == b || a == c || b == c)
                    {
                        cout << "trojkat jest rownoboczny";

                    }
                    if (a == b && a == c && b == c)
                    {
                        cout << "trojkat jest rownoboczny rownoramienny";
                    }



                    if (a == p || b == q || c == l)
                    {
                        cout << "trojat jest prostokatny" << endl;
                    }
                }
                else
                {
                    cout << "Nie mozna stworzyc takiego trojkata" << endl;
                }
            }

            else if (b >= a && b >= c)
            {
                if (a + c > b )
                {
                    cout << "Mozna zbudowac taki trojkat" << endl;

                    if (a == b || a == c || b == c)
                    {
                        cout << "trojkat jest rownoboczny";

                    }
                    if (a == b && a == c && b == c)
                    {
                        cout << "trojkat jest rownoboczny rownoramienny";
                    }



                    if (a == p || b == q || c == l)
                    {
                        cout << "trojat jest prostokatny" << endl;
                    }

                }
                else
                {
                    cout << "Nie mozna stworzyc takiego trojkata" << endl;
                }


            }

            else if (c >= a && c >= b)
            {
                if (a + b > c )
                {
                    cout << "Mozna zbudowac taki trojkat" << endl;

                    if (a == b || a == c || b == c)
                    {
                        cout << "trojkat jest rownoboczny";

                    }
                    if (a == b && a == c && b == c)
                    {
                        cout << "trojkat jest rownoboczny rownoramienny";
                    }



                    if (a == p || b == q || c == l)
                    {
                        cout << "trojat jest prostokatny" << endl;
                    }
                }
                else
                {
                    cout << "Nie mozna stworzyc takiego trojkata" << endl;
                }
            }




        }
        break;
        case 7:
        {
            cout << "podaj promien r= ";
            cin >> a;

            cout << "objetosc kuli o promieniu r = " << (4.0/3)*pi*a*a << endl;

        }
        break;

        case 8:
        {
            cout << "Podaj promien podstawy ";
            cin >> a;
            cout << "podaj tworzaca stozka ";
            cin >> b;

            wynik = (pi*a*a)*b;
            cout << "objetosc stozka to "<<wynik<<endl;

        }
        break;
        case 9:
        {
            cout << "Podaj promien podst ";
            cin >> a;
            cout << "podaj wysokosc";
            cin >> b;

            wynik = (pi*a*a)*b;
            cout << "Objetosc walca = " << wynik;
        }
        break;

        case 10:
        {
            cout << "Podaj ciag liczb ( o konczy wpisywanie)" << endl;

            i = 0;
            j = 0;
            k = 0;
            n = 0;
            m = 0;
            for (;;)
            {
                cin >> x;
                if (x == 0)
                    break;

                suma += x;
                i++;

                if (x > 0)
                {
                    suma1 += x;
                    j++;
                }
                if (x < 0)
                {
                    suma2 += x;
                    k++;
                }
                if (x % 2 == 0)
                {
                    suma3 += x;
                    n++;
                }
                else
                {
                    suma4 += x;
                    m++;
                }

            }
            if (suma != 0)
            {
                cout << "Srednia liczb wynosi " << suma / i << endl;
            }
            else
                cout << "nie wpisano liczb" << endl;

            if (suma1 != 0)
            {
                cout << "Srednia liczb dodatnich wynosi " << suma1 / j << endl;
            }
            else
                cout << "nie wpisano liczb dodatnich" << endl;
            if (suma2 != 0)
            {
                cout << "Srednia liczb ujemnych wynosi " << suma2 / k << endl;
            }
            else
                cout << "nie wpisano liczb ujemnych" << endl;
            if (suma3 != 0)
            {
                cout << "Srednia liczb parzystych wynosi " << suma3 / n << endl;
            }
            else
                cout << "nie wpisano liczb parzystych" << endl;
            if (suma4 != 0)
            {
                cout << "Srednia liczb nie parzystych wynosi " << suma4 / m << endl;
            }
            else
                cout << "nie wpisano liczb nie parzystych" << endl;





        }
        break;

        case 11:
        {
            cout << "Podaj liczbe" << endl;
            cin >> x;

            suma = 1;
            for (;;)
            {
                if (x == 0)
                    break;
                else
                {
                    suma *= x;
                    x--;
                }

            }
            cout << "silnia =  " << suma;
        }
        break;

        case 12:
        {
            cout << "podaj 2 liczby" << endl;
            cin >> a;
            cin >> b;
            for (;;)
            {
                if (a == b)
                {
                    cout << "NWD = " << a;
                    break;
                }
                else
                {
                    while (a>b)
                    {
                        a = a - b;
                    }
                    while (b > a)
                    {
                        b = b - a;
                    }


                }
            }
        }
        break;

        case 13:
        {
            cout << "Podaj wspolczynniki a1 b1 c1 pierwszego rownania " << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << "Podaj wspolczynniki a2 b2 c2 drugiego rownania rownania " << endl;
            cin >> a1;
            cin >> b1;
            cin >> c1;

            w = (a*b1) - (b*a1);

            if (w != 0)
            {
                wx = (c*b1) - (b*c1);
                suma = wx / w;

                wy = (a*c1) - (c*a1);
                suma1 = wy / w;
            }
            if (w == 0 && wx == 0 && wy == 0)
                cout << "uklad nieoznaczony" << endl;
            else if (w == 0 && wx != 0 && wy != 0)
                cout << "uklad sprzeczny" << endl;
            else
                cout << "X= " << suma << "Y= " << suma1 << endl;


        }
        break;
        case 14:
        {

            for(;;)
            {


                cout<<"1.Dodawanie macierzy";
                cout<<"2.odejmowanie macierzy";
                cout<<"3.Mnozenie macierzy";
                cout<<"4.Macierz Transponowana";


           switch(wybor)
           {
           case 0:
            {
                break;
            }
           case 1:
            {

            }
            break;
           case 2:
            {

            }
            break;
           case 3:
            {


            }
            break;
           case 4:
            {


            }
            break;
           default:
            {
                cout<<"nie ma takiej opcji"<<endl;

            }
           }



            }



        }
        break;
        default:
            cout << "Nie ma takiej opcji" << endl;


        }
        cout << endl;
    }


    return 0;
}
