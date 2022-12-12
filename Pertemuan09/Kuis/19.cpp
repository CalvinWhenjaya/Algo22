#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Input A: ";cin>>a;
    cout<<"Input B: ";cin>>b;

    if (a==b)
    {
        if (a%2<3)
        {
            cout<<a+10<<endl;
        } else {
            cout<<0<<endl;
        }        
    } else {
        for (b=1; b<=3; b++){
            b=b+a;
        }
        cout<<b<<endl;
    }
    

}