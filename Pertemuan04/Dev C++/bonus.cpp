#include<iostream>
using namespace std;

int main(){

    string nama,barang;
    double harga,jumlah,total,bonus;

    cout<<"Masukkan Nama Pembeli: ";cin>>nama;
    getline(cin,nama);
    cout<<"Masukkan Nama Barang: ";cin>>barang;
    cout<<"Masukkan Harga Barang: ";cin>>harga;
    cout<<"Masukkan Jumlah Beli: ";cin>>jumlah;
    cout<<"-----------------------"<<endl;
    cout<<"Barang Yang Anda Beli Adalah Baju"<<endl;

    harga=25000;
    jumlah=2;
    total=harga*jumlah;
    (total > 50000)?cout<<"Bonus: Payung"<<endl;

    cout<<"Total Bayar "<<total<<" Ribu"<<endl;
    cout<<"-- Terima Kasih Calvin Whenjaya --";

    return 0;

}