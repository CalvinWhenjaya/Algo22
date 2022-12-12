#include <iostream>
using namespace std;

int main(){

    int panjang, lebar, luas;
    string nama;

    cout<<"Masukkan Nama= ";cin>>nama;
    getline(cin,nama);
    cout<<"Masukkan Panjang= ";cin>>panjang;
    cout<<"Masukkan Lebar= ";cin>>lebar;

    luas=(panjang * lebar);

    cout<<"Luas= "<<luas<<endl;

    cout<<nama<<" Bisa Algoritma"<<endl;
    cout<<"Kamu Keren"<<endl;

    return 0;

}