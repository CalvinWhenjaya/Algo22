#include <iostream>
using namespace std;

int main(){

    int umur[2000], total, rerata;

    for (int a=0; a<=2000; a++){
        cout<<"Masukkan Umur: ";cin>>umur[a];
        total= total + umur[a];
    }

    rerata= total / 2000;
    cout<<"Rata-Rata Umur Adalah "<<rerata;

}