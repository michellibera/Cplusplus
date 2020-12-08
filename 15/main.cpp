
#include<iostream>
#include<fstream>
using namespace std;

void wczytaj(fstream &dane);
void srednia(fstream &dane,float &sr);
void zapis(fstream &rezultat,float &sr);

int main()
{
    float sr;
    fstream dane;
    fstream rezultat;


    wczytaj(dane);
    srednia(dane,sr);
    dane.close();
    cout<<sr<<endl;
    zapis(rezultat,sr);



}

void wczytaj(fstream &dane)
{
    int i;
    int l;
    float bufor;

    cout<<"Ilosc pomiarow ";
    cin>>l;

    dane.open("dane.bin", ios::binary|ios::out);

    if(dane.good())
    {

    for(i=0; i<l; i++)
    {
        cout<<"Pomiar "<<i+1<<": ";
        cin >> bufor;
        dane.write((char*)&bufor,sizeof(float));
    }
    dane.close();

    }
    else
        cout<<"Blad"<<endl;


}

void srednia(fstream &dane,float &sr)
{
    int l=0;
    float bufor;
    float suma = 0;

    dane.open("dane.bin", ios::binary|ios::in);

    while(!dane.eof())
    {
        dane.read((char*)&bufor,sizeof(bufor));
        if(!dane.eof())
        {
        suma+=bufor;
        l++;
        cout<<"bufor= "<<bufor<<", suma= "<<suma<<", l= "<<l<<endl;
        }

    }
    sr = suma/l;

    dane.close();

}

void zapis(fstream &rezultat, float &sr)
{
    rezultat.open("wyniki.txt",ios::out);
    rezultat<<sr;
    rezultat.close();
}
