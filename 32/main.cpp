

#include <iostream>

using namespace std;

typedef struct zesp
{
    float Re;
    float Im;

} zesp;

void wczytywanie(int m,int n,zesp tab[100][100]);
void wypisywanie(int m,int n,zesp tab[100][100]);
void iloczyn(zesp tab1[100][100],zesp tab2[100][100],int m, int n, int k,int l);

int main()
{
    zesp A[100][100],B[100][100];
    int m,n,k,l;

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

    cout<<"Podaj numer wiersza macierzy A ";
    cin>>k;
    cout<<"Podaj numer wiersza macierzy B ";
    cin>>l;

    iloczyn(A,B,m,n,k,l);



}

void wczytywanie(int m,int n,zesp tab[100][100])
{
    int i,j;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"podaj "<<i+1<<" , "<<j+1<<" element macierzy "<<endl;
            cout<<"Re ";
            cin>> tab[i][j].Re;
            cout<<"Im ";
            cin>> tab[i][j].Im;
        }
}

void wypisywanie(int m,int n,zesp tab[100][100])
{
    int i,j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<tab[i][j].Re<<" "<<tab[i][j].Im<<" ";

        }
        cout<<endl;
    }
}

void iloczyn(zesp tab1[100][100],zesp tab2[100][100],int m, int n, int k,int l)
{
    int i,j;
    zesp ilo;


        for(j=0;j<n;j++)
        {

            ilo.Re += ((tab1[k-1][j].Re*tab2[l-1][j].Re)-(tab1[k-1][j].Im*tab2[l-1][j].Im));
            ilo.Im +=((tab1[k-1][j].Re*tab2[l-1][j].Im)+(tab1[k-1][j].Im*tab2[l-1][j].Re));
        }

    if(ilo.Im >0)
    cout<<"Iloczyn skalarny = "<<ilo.Re<<"+"<<ilo.Im<<endl;
    else
        cout<<"Iloczyn skalarny = "<<ilo.Re<<""<<ilo.Im<<endl;


}
