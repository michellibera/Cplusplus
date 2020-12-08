#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int A[100][100];
    int m,n;
    int iloczyn=1;


    cout<<"podaj ilosc wierszy macierzy : ";
    cin>>m;
    cout<<"podaj ilosc kolumn macierzy : ";
    cin>>n;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        cout<<"Podaj "<<i+1<<" , "<<j+1<<" element macierzy : ";
        cin>>A[i][j];
    }
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        if(A[i][j]!= 0)
        {
            iloczyn *= A[i][j];

        }

    }
    cout<<"iloczyn wszystkich elementow roznych od zera to "<<iloczyn<<endl;


    return 0;
}
