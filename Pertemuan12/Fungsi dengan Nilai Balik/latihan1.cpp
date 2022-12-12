#include <iostream>
using namespace std;

float BeratBadanIdeal (string nama, double tinggi, double berat, double umur){
    double ideal;
    double p = (88.4+13.4*berat);
    double q = (4.8*tinggi);
    double r = (5.68*umur);
    ideal = p+q-r;
    return ideal;
}

int main(){
    string nama;
    double tinggi, berat, umur;
    cout<<"Masukkan Nama Anda: ";cin>>nama;
    cout<<"Masukkan Tinggi Anda: ";cin>>tinggi;
    cout<<"Masukkan Berat Anda: ";cin>>berat;
    cout<<"Masukkan Umur Anda: ";cin>>umur;
    cout<<BeratBadanIdeal(nama, tinggi, berat, umur);
}