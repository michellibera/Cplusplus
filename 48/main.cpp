#include <iostream>

using namespace std;

int main()
{
    int i,j,u,w;

    int m ; //liczba wierszy macierzy A
    int n; //liczba kolumn macierzy A
    int k; //liczba wierszy macierzy B
    int l ; //liczba kolumn macierzy B
    int p = m; //liczba wierszy macierzy C
    int q = l; //liczba kolumn macierzy C

    int A[100][100];
    int B[100][100];
    int C[100][100];

    cout<<"Podaj liczbe wierszy macierzy A : ";
    cin>>m;
    cout<<"Podaj liczbe kolumn macierzy A : ";
    cin>>n;
    cout<<"Podaj liczbe wierszy macierzy B : ";
    cin>>k;
    cout<<"Podaj liczbe kolumn macierzy B : ";
    cin>>l;

    if( n != k )
    {
        cout<<"Liczba kolumn macierzy A musi byc rowna liczbie wierszy macierzy B "<<endl;
    }
    else
    {



        for(i=0; i<m; i++ )                                                     //wprowadzenie elementow macierzy A
        {
            for(j=0; j<n; j++)
            {
                cout<<"Podaj [ "<<i+1<<" , "<<j+1<<" ] element macierzy A: ";
                cin>>A[i][j];

            }
        }

        for(i=0; i<k; i++ )                                                   //Wprowadzenie elementow macierzy B
        {
            for(j=0; j<l; j++)
            {
                cout<<"Podaj [ "<<i+1<<" , "<<j+1<<" ] element macierzy B: ";
                cin>>B[i][j];

            }
        }


        for(i=0; i<m; i++)
        {
            for(j=0; j<l; j++)
            {
                C[i][j]=0;

                for(u=0; u<l; u++)
                    C[i][j] += A[i][u] * B[u][j];

            }
        }


        for(i=0; i<m; i++)
        {
            for(j=0; j<l; j++)
            {
                cout<< C[i][j]<<" ";
            }
            cout<<endl;
        }


    }







    return 0;
}
