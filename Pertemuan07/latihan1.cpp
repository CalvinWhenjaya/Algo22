#include <iostream>
using namespace std;

int main(){

    string nama, hobi;
    int tinggi, berat, umur;

    cout<<"Masukkan Nama: ";
    getline(cin,nama);
     cout<<"Masukkan Hobi: ";
    getline(cin,hobi);
    cout<<"Masukkan Tinggi Badan: ";cin>>tinggi;
    cout<<"Masukkan Berat Badan: ";cin>>berat;
    cout<<"Masukkan Umur: ";cin>>umur;

    cout<<"------------------------"<<endl;
    cout<<"Nama Anda "<<nama<<endl;
    cout<<"Tinggi Badan Anda "<<tinggi<<" cm"<<endl;
    cout<<"Berat badan Anda "<<berat<<" kg"<<endl;
    cout<<"Umur Anda "<<umur<<" Tahun"<<endl;
    cout<<"Hobi Anda "<<hobi<<endl;

    cout<<"------------------------"<<endl;
    cout<<"Saya "<<nama<<" Umur "<<umur<<". Tinggi Badan Saya "<<tinggi<<" cm dan Berat Badan Saya "<<berat<<" kg. Hobi Saya adalah "<<hobi<<endl;

    return 0;

}