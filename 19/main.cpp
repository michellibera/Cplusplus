#include <iostream>

using namespace std;

float A[100];
float B[100];

void wczyt(int n);
void wypis (int n);
float iloczynab(int n);
float iloczynaa(int n);
float iloczynbb(int n);
float wyrazenia(int n);

int main()
{
    int n;
float wyrazenie;


    cout<<"podaj ilosc elementow wektorow A i B";
    cin>>n;

    wczyt(n);
    wypis(n);

    wyrazenie=wyrazenia(n);

    cout<<"aa"<<iloczynaa(n)<<endl;
    cout<<"bb"<<iloczynbb(n)<<endl;
    cout<<"ab"<<iloczynab(n)<<endl;

    cout<<wyrazenie;





    return 0;
}
void wczyt(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Podaj "<<i+1<<" element wektora A";
        cin>>A[i];

    }

      for(i=0;i<n;i++)
    {
        cout<<"Podaj "<<i+1<<" element wektora B";
        cin>>B[i];

    }
}

void wypis(int n)
{
    int i;

    cout<<"A"<<endl;

      for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;

    }
    cout<<"B"<<endl;

      for(i=0;i<n;i++)
    {
        cout<<B[i]<<endl;

    }

}

float iloczynab(int n)
{ int i;
    float suma=0;
      for(i=0;i<n;i++)
    {
        suma+=A[i]*B[i];

    }
    return suma;
}
float iloczynaa(int n)
{ int i;
    float suma=0;
      for(i=0;i<n;i++)
    {
        suma+=A[i]*A[i];

    }
    return suma;
}
float iloczynbb(int n)
{ int i;
    float suma=0;
      for(i=0;i<n;i++)
    {
        suma+=B[i]*B[i];

    }
    return suma;
}

float wyrazenia(int n)
{


    float suma=0;



        suma=(((iloczynaa(n))+(iloczynbb(n)))/(iloczynab(n)));


    return suma;

}
