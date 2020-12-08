#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0;
    int A[100][100];
    int B[100];
    int m,n;
    int emin;


    cout<<"podaj ilosc wierszy macierzy : ";
    cin>>m;
    cout<<"podaj ilosc kolumn macierzy : ";
    cin>>n;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Podaj "<<i+1<<" , "<<j+1<<" element macierzy : ";
            cin>>A[i][j];
        }

    emin=A[0][0];

    for(j=0; j<n; j++)
    {


        for(i=0; i<m; i++)
        {
            if(A[i][j]<emin)
            {
                emin= A[i][j];

            }

        }

        B[i]=emin;
        emaks=A[0][j+1];
    }

    for(i=0;i<n;i++)
        cout<<"B= "<<B[i]<<" , ";

}
