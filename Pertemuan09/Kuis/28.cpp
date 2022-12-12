#include <iostream>
using namespace std;

int main(){

    int a,b,c,d,e;
    a=50; a=a%9; b=a-2;

    cout<<"Nilai A: "<<a<<endl;
    cout<<"Nilai B: "<<b<<endl;

    a++; --b;

    cout<<"Nilai A Lagi: "<<a<<endl;
    cout<<"Nilai B Lagi: "<<b<<endl;

    c=a>b;
    d=a<b;
    e=b^a;

    cout<<"Nilai C: "<<c<<endl;
    cout<<"Nilai D: "<<d<<endl;
    cout<<"Nilai E: "<<e<<endl;

}