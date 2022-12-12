#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    char h;

    cout<<"Masukkan Sebuah Angka: ";cin>>a;

    if (a<5)
    {
        h='a';
    } else if (a>5)
    {
        h='b';
    } else if (a==0)
    {
        h='c';
    } else {
        h='d';
    }
    
    switch (h)
    {
    case 'a': cout<<"Universitas";
        break;
    case 'b': cout<<"Universal";
        break;
    case 'c': cout<<"Kampus";
        break;
    case 'd': cout<<"Keren";
        break;
    default: cout<<"Uvers Kampus Keren";
        break;
    }
    
    

}