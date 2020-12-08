/* 1. dwa wektory a n elemntowy i b nelementowy (n i lementy zadawane z klawiatury) napisaæ program liczacy iloczyn skalarny.
  */

#include <iostream>

using namespace std;

int main()
{
    int a[10000];
    int b[10000] ;
    int n;
    int i;
    int iloczyn=1;
    int suma=0;

       cout<<"podaj ilosc elementow wektora a i b : ";
       cin>>n;

       for(i=0;i<n;i++)
       {

           cout<<"podaj"<<i+1<<" element wektora A : ";
           cin>>a[i];

       }

          for(i=0;i<n;i++)
       {

           cout<<"podaj"<<i+1<<" element wektora B : ";
           cin>>b[i];

       }

          for(i=0;i<n;i++)
       {

           iloczyn = a[i]*b[i];
           suma += iloczyn;

           iloczyn=1;
       }

       cout<<" Iloczyn skalarny wektora A i B = "<<suma<<endl;

    return 0;
}
