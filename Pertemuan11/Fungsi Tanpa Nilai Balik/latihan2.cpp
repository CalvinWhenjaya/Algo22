#include <iostream>
using namespace std;

void VolumeBalok (double panjang, double lebar, double tinggi){
    double volume = panjang * lebar * tinggi;
    cout<<"Volume Balok Adalah: "<<volume<<endl;
}

int main(){
    double panjang, lebar, tinggi;
    cout<<"Masukkan Panjang: ";cin>>panjang;
    cout<<"Masukkan Lebar: ";cin>>lebar;
    cout<<"Masukkan Tinggi: ";cin>>tinggi;
    VolumeBalok (panjang, lebar, tinggi);
    return 0;
}