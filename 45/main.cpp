#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0;
    int A[100][100];
    int B[100];
    int m,n;
    int emaks;


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

    emaks=A[0][0];

    for(i=0; i<m; i++)
    {


        for(j=0; j<n; j++)
        {
            if(A[i][j]>emaks)
            {
                emaks= A[i][j];

            }

        }

        B[i]=emaks;
        emaks=A[i+1][0];
    }

    for(i=0;i<m;i++)
        cout<<"B= "<<B[i]<<" , ";

}
