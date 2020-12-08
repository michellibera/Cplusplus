#include <iostream>

using namespace std;
void wczyt(int tab1[10][10],int tab2[10][10],int m,int n);
void f(int tab1[10][10],int tab2[10][10],int m,int n,float &sr1,float &sr2,int &nwd);

int main()
{
    int A[10][10];
    int B[10][10];
    int m;
    int n;
    float sr1;
    float sr2;
    int nwd;


    /*---------------------------------------------------------------------------------------------*/
    cout<<"podaj ilosc wierszy ";
    cin>>m;
    cout<<"podaj ilosc kolumn ";
    cin>>n;

    wczyt(A,B,m,n);

    /*--------------------------------------------------------------------------------------------*/

    f(A,B,m,n,sr1,sr2,nwd);
    cout<<sr1<<" , "<<sr2<<" , "<<nwd<<endl;

    return 0;
}

void wczyt(int tab1[10][10],int tab2[10][10],int m,int n)
{
    int i;
    int j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Podaj "<<i+1<<" , "<<j+1<<" element macierzy A: ";
            cin>>tab1[i][j];

        }

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Podaj "<<i+1<<" , "<<j+1<<" element macierzy B: ";
            cin>>tab2[i][j];

        }
}

void f(int tab1[10][10],int tab2[10][10],int m,int n,float &sr1,float &sr2,int &nwd)
{
    int i;
    int j;
    int l1=0;
    int l2=0;
    int a;
    int b;

    float suma1=0;
    float suma2=0;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            if(tab1[i][j]%2 == 0)
            {
                suma1+=tab1[i][j];
                l1++;
            }
             if(tab2[i][j]%2 == 0)
            {
                suma2+=tab2[i][j];
                l2++;
            }
        }

        sr1=suma1/l1;
        sr2=suma2/l2;

        a=int(sr1);
        b=int(sr2);

        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }
            else
            {
                b=b-a;
            }
        }

        nwd = a;
}
