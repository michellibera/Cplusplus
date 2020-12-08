#include <iostream>

using namespace std;

typedef struct zesp
{
    float Re;
    float Im;
} zesp;

void wczyt(zesp tab[100][100],int m,int n);
void wypis(zesp tab[100][100],int m,int n);
void s(zesp tab[100][100],int m,int n,zesp suma, int k);

int main()
{
    zesp A[100][100];
    zesp suma;
    int m;
    int n;
    int k;

    cout<<"Podaj ilosc wierszy macierzy ";
    cin>>m;
    cout<<"Podaj ilosc kolumn macierzy ";
    cin>>n;

    wczyt(A,m,n);
    wypis(A,m,n);

    cout<<"Podaj numer wiersza ";
    cin>>k;
    s(A,m,n,suma,k);



    return 0;
}

void wczyt(zesp tab[100][100],int m,int n)
{
    int i;
    int j;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Podaj czesc Re liczby zespolonej nr "<<i+1<<" , "<<j+1<<" ";
            cin>>tab[i][j].Re;
            cout<<"Podaj czesc Im liczby zespolonej nr "<<i+1<<" , "<<j+1<<" ";
            cin>>tab[i][j].Im;

        }
}

void wypis(zesp tab[100][100],int m,int n)
{
    int i;
    int j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(tab[i][j].Im > 0)
            cout<<tab[i][j].Re<<"+"<<tab[i][j].Im<<"i ";
            if(tab[i][j].Im < 0)
            cout<<tab[i][j].Re<<" "<<tab[i][j].Im<<"i ";
            if(tab[i][j].Im == 0)
            cout<<tab[i][j].Re<<" ";
            if(tab[i][j].Re == 0)
            cout<<tab[i][j].Im<<"i ";
        }
        cout<<endl;
    }
}

void s(zesp tab[100][100],int m,int n,zesp suma, int k)
{
    int i;
    int j;




    for(j=0;j<n;j++)
    {
        suma.Re += tab[k-1][j].Re;
        suma.Im += tab[k-1][j].Im;

    }

    cout<<"suma czesci Re "<<k<<" wiersza = "<<suma.Re<<endl;
    cout<<"suma czesci Im "<<k<<" wiersza = "<<suma.Im<<endl;
}
