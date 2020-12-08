#include <iostream>
#include<math.h>

using namespace std;

typedef struct zesp
{
    float re;
    float im;

} zesp;

void wczyt(zesp tab[10][10],int *wm,int *wn);
void wypisz(zesp tab[10][10],int *wm,int *wn);
void modul(zesp *tab,int *wn,float &mod);


int main()
{
    float mod=0;
    zesp A[10][10];
    int *wm = new int;
    int *wn = new int;
    int nr;

    cout<<"podaj ilosc wierszy tablicy ";
    cin>>*wm;
    cout<<"podaj ilosc kolumn tablicy ";
    cin>>*wn;

    wczyt(A,wm,wn);
    wypisz(A,wm,wn);

    cout<<"podaj  numer wiersza: ";
    cin>>nr;

    modul(A[nr-1],wn,mod);

    cout<<"modul 1 wiersza = "<<mod<<endl;





    delete wm;
    delete wn;
    return 0;
}

void wczyt(zesp tab[10][10],int *wm,int *wn)
{
    int i;
    int j;

    for(i=0; i<*wm; i++)
        for(j=0; j<*wn; j++)
        {
            cout<<"podaj czesc re elementu "<<i+1<<" , "<<j+1<<" : ";
            cin>>tab[i][j].re;
            cout<<"podaj czesc im elementu "<<i+1<<" , "<<j+1<<" : ";
            cin>>tab[i][j].im;

        }

}

void wypisz(zesp tab[10][10],int *wm,int *wn)
{
    int i;
    int j;

    for(i=0; i<*wm; i++)
    {
        for(j=0; j<*wn; j++)
        {
          if(tab[i][j].im >= 0)
                cout<<tab[i][j].re<<"+"<<tab[i][j].im<<"i ";
          else
            cout<<tab[i][j].re<<tab[i][j].im<<"i ";
        }
        cout<<endl;
    }
}

void modul(zesp *tab,int *wn,float &mod)
{
    int i;
    for(i=0;i<*wn;i++)
    {
        mod += sqrtf((tab[i].re * tab[i].re)-(tab[i].im * tab[i].im));
    }

}
