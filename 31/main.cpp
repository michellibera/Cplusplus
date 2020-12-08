

#include <iostream>

using namespace std;

void wczytywanie(int m,int n,int tab[100][100]);
void wypisywanie(int m,int n,int tab[100][100]);
int iloczynw11(int m,int n,int tab1[100][100], int tab2[100][100]);
int iloczynw22(int m,int n,int tab1[100][100], int tab2[100][100]);
int iloczynk1k2(int m,int n,int tab1[100][100], int tab2[100][100]);
int suma11(int m, int n,int tab1[100][100], int tab2[100][100] );
int suma22(int m, int n,int tab1[100][100], int tab2[100][100] );
int suma12(int m, int n,int tab1[100][100], int tab2[100][100] );

int main()
{
    int A[100][100],B[100][100];
    int m,n;
    int iloczyn1;
    int iloczyn2;
    int iloczyn3;

    int suma1;
    int suma2;
    int suma3;

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

    cout<<"iloczyn skalarny 1 wiersza A i 1 wiersza B ";
    iloczyn1 = iloczynw11(m,n,A,B);
    cout<<iloczyn1<<endl;

    cout<<"iloczyn skalarny ost wiersza A i ost wiersza B ";
    iloczyn2 = iloczynw22(m,n,A,B);
    cout<<iloczyn2<<endl;

    cout<<"iloczyn skalarny 1 kolumny A i ost kolumny B ";
    iloczyn3 = iloczynk1k2(m,n,A,B);
    cout<<iloczyn3<<endl;

     cout<<"suma  1 wiersza A i 1 wiersza B ";
    suma1 = suma11(m,n,A,B);
    cout<<suma1<<endl;

    cout<<"suma ost wiersza A i ost wiersza B ";
    suma2 = suma22(m,n,A,B);
    cout<<suma2<<endl;

    cout<<"suma 1 kolumny A i ost kolumny B ";
    suma3 = suma12(m,n,A,B);
    cout<<suma3<<endl;







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

int iloczynw11(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int iloczyn=0;


      for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0)
                iloczyn+= tab1[i][j] * tab2[i][j];

        }
    }
    return iloczyn;
}

int iloczynw22(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int iloczyn=0;


      for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==(m-1))
                iloczyn+= tab1[i][j] * tab2[i][j];

        }
    }
    return iloczyn;
}

int iloczynk1k2(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int iloczyn=0;


      for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0)
                iloczyn+= tab1[i][j] * tab2[i][(n-1)];

        }
    }
    return iloczyn;
}

int suma11(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int suma=0;


      for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0)
                suma+= tab1[i][j] + tab2[i][j];

        }
    }
    return suma;
}

int suma12(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int suma=0;


      for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0)
                suma+= tab1[i][j] + tab2[i][(n-1)];

        }
    }
    return suma;
}

int suma22(int m,int n,int tab1[100][100], int tab2[100][100])
{
    int i,j;
    int suma=0;


      for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==(m-1))
                suma+= tab1[i][j] + tab2[i][j];

        }
    }
    return suma;
}



