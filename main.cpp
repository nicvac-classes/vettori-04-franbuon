#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout<<"Quanti numeri vuoi generare?"<<endl;
    cin>>N;
    int V[N];
    i=0;
    while(i<N)
    {
        V[i]=rand()%1001;
        cout<<V[i]<<endl;
        i=i+1;
    }
    i=0;
    int nump;
    nump=0;
    while(i<N)
    {
        if(V[i]%2==0)
        {
            nump=nump+1;
        }
        i=i+1;
    }
    cout<<"I numeri pari sono "<<nump<<endl;
    i=0;
    int nummax, nummin, imax, imin;
    imin=0;
    nummin=V[imin];
    while(i<N)
    {
        if(V[i]<nummin)
        {
            nummin=V[i];
            imin=i;
        }
        i=i+1;
    }
    cout<<"Il numero minimo è "<<V[imin]<<", ed era il "<<imin+1<<"° numero"<<endl;
    i=0;
    imax=0;
    nummax=V[imax];
    while(i<N)
    {
        if(V[i]>nummax)
        {
            nummax=V[i];
            imax=i;
        }
        i=i+1;
    }
    cout<<"Il numero massimo è "<<V[imax]<<", ed era il "<<imax+1<<"° numero";
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
