#include <iostream>
using namespace std;

int a (int nilai){
    return nilai;
}

int main(){
    int angka;
    cout<<"Masukkan Angka: ";cin>>angka;
    cout<<"Angka Yang Dimasukkan: "<<a(angka);
}