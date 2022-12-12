#include <iostream>
using namespace std;

int main(){

    char b;
    int c,d;

    cout<<"Masukkan Sebuah Huruf: ";cin>>b;

    switch (b)
    {
    case 'a' ... 'd': c=-5;break;
    case 'f' ... 'j': c=5;break;
    case 'l' ... 'p': c=10;break;
    default: c=0;
    }

    switch (b)
    {
    case 'c': for (d=c; c<10; c=c+5){cout<<d<<" "; };break;
    case 'g': for (d=c; c>10; c=c+5){cout<<d<<" "; };break;
    case 'm': for (d=c; c<10; c--){cout<<d<<" "; };break;
    default: for (d=c; c<10; c=c-2){cout<<d<<" "; }
        break;
    }

}