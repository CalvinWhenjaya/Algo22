#include <iostream>
using namespace std;

float VolumeBalok (double panjang, double lebar, double tinggi){
    double volume;
    volume = panjang * lebar * tinggi;
    return volume;
}

int main(){
    double panjang, lebar, tinggi;
    cout<<"Masukkan Panjang: ";cin>>panjang;
    cout<<"Masukkan Lebar: ";cin>>lebar;
    cout<<"Masukkan Tinggi: ";cin>>tinggi;
    cout<<VolumeBalok (panjang, lebar, tinggi);
}