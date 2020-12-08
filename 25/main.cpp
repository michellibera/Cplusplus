#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>


using namespace std;

typedef struct piloci
{
    string imie;
    string nazwisko;
    int wiek;
    float nalot;


}piloci;

int main()
{
    int licznik;
    string linia;
    piloci bufor;
    fstream baza;
    baza.open("baza.txt",ios::out|ios::in|ios::app);
    if(baza.good())
    {
        for(int i=0;i<3;i++)
        {
            cout<<"podaj imie ";
            cin>>bufor.imie;
            baza<<bufor.imie<<endl;
            cout<<"podaj nazwisko ";
            cin>>bufor.nazwisko;
            baza<<bufor.nazwisko<<endl;
            cout<<"podaj wiek ";
            cin>>bufor.wiek;
            baza<<bufor.wiek<<endl;
            cout<<"podaj nalot ";
            cin>>bufor.nalot;
            baza<<bufor.nalot<<endl;
        }
    }


    while(getline(baza,linia))
    {
        licznik++;

        switch(licznik)
        {
        case 1:
            bufor.imie = linia;break;
        case 2:
            bufor.nazwisko = linia;break;
        case 3:
            bufor.wiek=atoi(linia.c_str());break;
        }
    }

    return 0;
}
