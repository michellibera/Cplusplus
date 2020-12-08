#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0;
    int A[100][100];
    int m,n;
    int suma=0;
    int suma1=0;

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
        if(A[i][j]>0)
        {
            suma1+=A[i][j];
            k++;
        }
        suma+=A[i][j];
    }
    cout<<"srednia wszystkich elementow to "<<(suma*1.0)/(m*n)<<endl;
    cout<<"srednia  elementow dodatnich to "<<(suma1*1.0)/k<<endl;

    return 0;
}
