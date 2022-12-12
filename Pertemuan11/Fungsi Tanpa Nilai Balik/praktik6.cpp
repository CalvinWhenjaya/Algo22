#include <iostream>
using namespace std;

void HitungLuasSegitiga (double alas, double tinggi){
    double luas = (alas * tinggi) / 2;
    cout<<"Luas Segitiga Adalah: "<<luas<<endl;
}

int main(){
    double alas, tinggi;
    cout<<"Masukkan Alas: ";cin>>alas;
    cout<<"Masukkan Tinggi: ";cin>>tinggi;
    HitungLuasSegitiga (alas, tinggi);
    return 0;
}