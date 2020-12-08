#include <iostream>

using namespace std;
int minimaks(int A[] ,int *maksi,int n);

int main()
{
     int tab[10][10];
     int mak;
     int m,n;

     cout<<"podaj m ";
     cin>>m;
    cout<<"podaj n ";
     cin>>n;



     for(int i=0;i<m;i++)
        for(int j=0;i<n;j++)
     {
         cout<<i+1<<" , "<<j+1<<" ";
         cin>>tab[i][j];
     }

     int mini=minimaks(&tab[0][5],&mak,n);

     cout<<mini<<" ,"<<mak<<endl;

    return 0;
}

int minimaks(int A[],int *maksi,int n)
{ int i;

 int mini=A[0];
 maksi=&A;

    for(i=0;i<n;i++)
    {
        if(A[i]>= *maksi)
            maksi=&(A+i);

        if(A[i]<= mini)
            mini=A[i]
    }

    return mini;
}
