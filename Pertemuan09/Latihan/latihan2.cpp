#include <iostream>
using namespace std;

int main(){

    int umur[2000], total=0, b, rerata;

    cout<<"Ingin Memasukkan Berapa Data ? ";cin>>b;

    for (int a=0; a<=b; a++){
        cout<<"Masukkan Umur: ";cin>>umur[a];
        total= total + umur[a];
    }

    rerata= total / b;
    cout<<"Rata-Rata Umur Adalah "<<rerata;

}