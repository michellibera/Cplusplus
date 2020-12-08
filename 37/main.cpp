#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int m,n;
    int tab[100][100];
    int maks, mini;

    cout<<"Podaj ilosc wierszy ";
    cin>>m;
    cout<<"Podaj ilosc kolumn ";
    cin>>n;

    for(i=0; i<m ; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Podaj "<<i+1<<" , "<<j+1<<" element ";
            cin>>tab[i][j];

        }

        maks=tab[0][0];
        mini=tab[0][0];


    for(i=0; i<m ; i++)
        for(j=0; j<n; j++)
        {
            if(tab[i][j]>maks)
                maks=tab[i][j];
            if(tab[i][j]<mini)
                mini=tab[i][j];
        }
cout<<"Najwiekszy element macierzy = "<<maks<<endl;
cout<<"Najmniejszy element macierzy = "<<mini<<endl;


    return 0;
}
