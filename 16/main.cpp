#include <iostream>
#include <fstream>
using namespace std;

typedef struct zesp
{
    float Re;
    float Im;
} zesp;

void wczytaj(fstream &zespolone);

int main()
{
    static int l;
    fstream zespolone;

    wczytaj(zespolone);
    cout<<l<<endl;

    return 0;
}

void wczytaj(fstream &zespolone)
{
    static int l;
    zesp *bufor = new zesp[sizeof(zesp)];

    cout<<"podaj ilosc pomiarow: ";
    cin>>l;

    zespolone.open("zespolone.bin",ios::binary|ios::out);

    if(zespolone.good())
    {
        cout<<"Podaj pomiar "<<endl;

        for(int i=0; i<l; i++)
        {
            cout<<" "<<i+1<<" : "<<endl;
            cout<<"Re ";
            cin>> *bufor.Re;
            cout>>"Im ";
            cin>>*bufor.Im;

            zespolone.write((char *)bufor,sizeof(bufor));

        }
    }
    else
        cout<<"Blad"<<endl;

    delete bufor;
    zespolone.close();

}
