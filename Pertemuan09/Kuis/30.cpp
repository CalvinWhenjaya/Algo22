#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Masukkan A: ";cin>>a;
    cout<<"Masukkan B: ";cin>>b;

    cout<<a<<" | "<<b<<" = "<<(a|b)<<endl;
    cout<<a<<" & "<<b<<" = "<<(a&b)<<endl;
    cout<<a<<" ^ "<<b<<" = "<<(a^b)<<endl;
    cout<<a<<" << "<<b<<" = "<<(a<<b)<<endl;
    cout<<a<<" >> "<<b<<" = "<<(a>>b)<<endl;
    cout<<" ~ "<<a<<" = "<<(~a)<<endl;

}