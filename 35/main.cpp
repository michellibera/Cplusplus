#include <iostream>

using namespace std;

void wczytywanie(int m,int n,int tab[100][100]);
void wypisywanie(int m,int n,int tab[100][100]);

int suma1(int m, int n,int k,int l,int tab1[100][100], int tab2[100][100] );
int maks(int m, int n,int k,int tab1[100][100]);
int maks1(int m, int n,int tab1[100][100]);
void makw(int m, int n,int tab1[100][100]);


int main()
{
    int A[100][100],B[100][100];
    int m,n;
    int k,l;

    int suma;
    int maksi;

    cout<<"podaj liczbe wierszy macierz A i B ";
    cin>>m;
    cout<<"podaj liczbe kolumn macierz A i B ";
    cin>>n;

    cout<<"Wczytanie macierzy A"<<endl;
    wczytywanie(m,n,A);

    cout<<"Wczytywanie macierzy B"<<endl;
    wczytywanie(m,n,B);

    cout<<"Macierz A "<<endl;
    wypisywanie(m,n,A);

    cout<<"Macierz B "<<endl;
    wypisywanie(m,n,B);

    cout<<"Wybierz wiersz macierzy A ";
    cin>>k;

    cout<<"Wybierz wiersz macierzy B ";
    cin>>l;


    cout<<"suma " <<k<<" wiersza A i "<<l<<" wiersza B ";
    suma = suma1(m,n,k,l,A,B);
    cout<<suma<<endl;


    cout<<"Wybierz wiersz macierzy A ";
    cin>>k;

    maksi=maks(m,n,k,A);

    cout<<"Najwieksza wartosc w "<< k<<" wierszu macierzy A to "<<maksi<<endl;

    cout<<"Wybierz wiersz macierzy B ";
    cin>>k;

    maksi=maks(m,n,k,B);

    cout<<"Najwieksza wartosc w "<< k<<" wierszu macierzy B to "<<maksi<<endl;


    maksi=maks1(m,n,A);
    cout<<"Najwieksza wartosc na przekatnej macierzy A= "<<maksi<<endl;

    cout<<"najwieksze wartosci w poszczegolnych wierszach macierzy A to "<<endl;

    makw(m,n,A);












    return 0;
}
void wczytywanie(int m,int n,int tab[100][100])
{
    int i,j;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"podaj "<<i+1<<" , "<<j+1<<" element macierzy ";
            cin>> tab[i][j];
        }
}

void wypisywanie(int m,int n,int tab[100][100])
{
    int i,j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<tab[i][j]<<" ";

        }
        cout<<endl;
    }
}



int suma1(int m,int n,int k,int l,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int suma=0;


      for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==(k-1))
                suma+= tab1[i][j] ;
            if(i==(l-1))
                suma+= tab2[i][j] ;

        }
    }
    return suma;
}

int maks(int m, int n,int k,int tab1[100][100])
{
    int i,j;
    int maks=tab1[k][0];

    for(i=0;i<n;i++)
    {
        if(tab1[k][i]>=maks)
        {
            maks=tab1[k][i];
        }
    }

    return maks;
}

int maks1(int m, int n,int tab1[100][100])
{
    int i,j;
    int maks=tab1[0][0];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

        if(i==j)
        {


        if(tab1[i][j]>=maks)
        {
            maks=tab1[i][j];
        }
        }

        }
    }

    return maks;
}

void makw(int m, int n,int tab1[100][100])
{
    int i,j,k;
    int w[10];

    for(int k=0;k<m;k++)
    {


      int maks=tab1[k][0];

    for(i=0;i<n;i++)
    {
        if(tab1[k][i]>=maks)
        {
            maks=tab1[k][i];
        }
    }

    w[k]=maks;
    }

    for(k=0;k<m;k++)
        cout<<w[k];
}

