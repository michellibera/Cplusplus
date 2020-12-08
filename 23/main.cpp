#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

typedef struct zesp
{
    float re;
    float im;
    float m;

}zesp;

void wczyt(zesp A[10],int m);
void modul(zesp A[10],int m);
void zapis(fstream plik,zesp A[10],int m);


int main()
{
    fstream plik;
    zesp A[10];
    int m;
    cout<<"podaj ilosc elementow wektora A ";
    cin>>m;

    wczyt(A,m);
    modul(A,m);

    plik.open("zesp.txt",ios::out);
    zapis(plik,A,m);
    plik.close();





    return 0;
}

void wczyt(zesp A[10],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        cout<<"podaj czesc re "<<i+1<<" elementu ";
        cin>>A[i].re;
        cout<<"podaj czesc im "<<i+1<<" elementu ";
        cin>>A[i].im;
    }
}

void modul(zesp A[10],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
       A[i].m = sqrtf((A[i].re * A[i].re)-(A[i].im * A[i].im));
    }
}

void zapis(fstream plik,zesp A[10],int m)
{
    int i;

    if(!plik.good())
        cout<<"blad"<<endl;
    else
    {
        for(i=0;i<m;i++)
        {
            plik<<A[i].re<<endl;
            plik<<A[i].im<<endl;
            plik<<A[i].m<<endl;
        }
    }
}
