/* z wykorzystaniem funkcji obliczaj¹cej silnie obliczyæ wartoœæ 2mianu newtona  n nad k  = n!/k!*(n-k)!. n k zadawane przez u¿ytwkownika w funkcji g³ównej

 */


#include <iostream>

using namespace std;

float silniaI(float x);
float silniaR(float x);

int main()
{
    float n;
    float k;
    float dwumianI;
    float dwumianR;
    cout<<"podaj n";
    cin>>n;
    cout<<"Podaj k";
    cin>>k;

    dwumianI=silniaI(n)/(silniaI(k)*silniaI(n-k));

    cout<<dwumianI<<endl;

    dwumianR=silniaR(n)/(silniaR(k)*silniaR(n-k));
    cout<<dwumianR;



    return 0;
}

float silniaI(float x)
{


            int iloczyn = 1;
            for (;;)
            {
                if (x == 0)
                    break;
                else
                {
                    iloczyn*= x;
                    x--;
                }

            }
            return iloczyn;
}
float silniaR(float x)
{


    if(x==0)
       return 1;
    else
        return x*silniaR(x-1);



}
