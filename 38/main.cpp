/* 2.dany jest n elementowy wektor liczb rzeczywistych znale¿æ max i min i znaale¿c pozycje
   */

#include <iostream>

using namespace std;

int main()
{
    int n;
    float tab[10000];
    int k;               // licznik maksimum
    int l;               // licznik minimum
    int i;
    float maks;
    float mini;

    cout<<"Podaj liczbe elementow wektora ";
    cin>>n;

    for(i=0;i<n;i++)
    {

        cout<<"Podaj "<<i+1<<" element wektora ";
        cin>>tab[i];

    }

    i=0;
    maks = tab[i];

    for(i=0;i<n;i++)
    {
        if(tab[i]>=maks)
        {
            maks=tab[i];
            k=i;
        }
    }

    cout<<"najwiekszy element wektora = "<<maks<<" na "<<k+1<<" miejscu wektora "<<endl;

    mini=tab[i];

     for(i=0;i<n;i++)
    {
        if(tab[i]<=mini)
        {
            mini=tab[i];
            l=i;
        }
    }

    cout<<"najmniejszym element wektora = "<<mini<<" na "<<l+1<<" miejscu wektora "<<endl;

    return 0;
}
