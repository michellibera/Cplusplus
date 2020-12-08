#include <iostream>

using namespace std;
void wczyt( int *w)
{
    for(int i=0;i<10;i++)
    w[i]=5;
}


int main()
{
    int A[10][10];
    wczyt(&A[8]);
cout<<A[8][0];

    return 0;
}
