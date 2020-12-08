 /* 1. 27. dana jest macierz a o wymiarach m n obliczyc œredni¹ arytmetyczn¹ na g³ówne przek¹tnj macierzy na na drugiej przek¹tnej
       c) na i nad g³ówn¹ na i pod g³own¹ macirzy i na obwodzie
      */


#include <iostream>

using namespace std;

int main()
{
    int n;
    int A[100][100];
    int i;
    int j;
    int suma=0;
    int ilosc=0;


    cout<<"Podaj rozmiar macierzy ";
    cin>>n;

    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
              cout<<"podaj "<<i+1<<" "<<j+1<<"element macierzy : ";
              cin>>A[i][j];
          }


    }

      for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
             if(i==j)
             {
              ilosc++;
              suma += A[i][j];

             }
          }


    }
    cout<<"srednia arytmetyczna elementow glownej przekatnej = "<<(suma*1.0)/ilosc<<endl;

    ilosc=0;
    suma=0;
    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
             if(j==((n-1)-i))
             {
              ilosc++;
              suma += A[i][j];


             }
          }


    }
    cout<<"srednia arytmetyczna elementow drugiej przekatnej = "<<(suma*1.0)/ilosc<<endl;

    ilosc=0;
    suma=0;


          for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
             if(i==j || j>i )
             {
              ilosc++;
              suma += A[i][j];

             }
          }


    }
      cout<<"srednia arytmetyczna elementow glownej przekatnej i elementow nad nia = "<<(suma*1.0)/ilosc<<endl;

       ilosc=0;
    suma=0;

              for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
             if(i==j || j<i )
             {
              ilosc++;
              suma += A[i][j];

             }
          }


    }
      cout<<"srednia arytmetyczna elementow glownej przekatnej i elementow pod nia = "<<(suma*1.0)/ilosc<<endl;

       ilosc=0;
    suma=0;

    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
     {
        if(i==0 || i==(n-1))
        {
            ilosc++;
            suma+=A[i][j];
        }
        if(j==0 || j==(n-1))
        {
            ilosc++;
            suma+=A[i][j];
        }
     }

    }
    ilosc-=4;
    suma-=( A[0][0] + A[0][n-1] + A[n-1][0] + A[n-1][n-1]);

    cout<<"srednia arytmetyczna elementow na obwodzie = "<<(suma*1.0)/ilosc<<endl;

    return 0;
}
