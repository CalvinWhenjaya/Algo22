#include <iostream>
using namespace std;

int main(){

    int pil, jmlpaket, jmltunai, total, harga, GT;
    string nama, namapaket;
    char tunai;

    cout<<"Aplikasi Paket Sembako"<<endl;
    cout<<"-----------------------------------"<<endl;

    cout<<"#Aplikasi Donasi Covid-19#"<<endl;
    cout<<"-----------------------------------"<<endl;
    
    cout<<"Sembako (Rp. 100.000)"<<endl;
    cout<<"Sembako + Masker (Rp. 150.000)"<<endl;
    cout<<"Sembako + Face Shield (Rp. 250.000)"<<endl;
    cout<<"Sembako + APD (Rp. 500.000)"<<endl;
    cout<<"Sembako + ALL (Rp. 1.000.000)"<<endl;

    cout<<"-----------------------------------"<<endl;
    cout<<"Masukkan Pilihan Anda (1-5): ";cin>>pil;

    if (pil == 1)
    {
        namapaket= "Sembako";
        harga= 100000;
    } else if (pil == 2)
    {
        namapaket= "Sembako + Masker";
        harga= 150000;
    } else if (pil == 3)
    {
        namapaket= "Sembako + Face Shield";
        harga= 250000;
    } else if (pil == 4)
    {
        namapaket= "Sembako + APD";
        harga= 500000;
    } else if (pil == 5)
    {
        namapaket= "Sembako + ALL";
        harga= 10000000;
    } else {
        namapaket= "Salah Pilih";
        harga= 0;
    }

    cout<<"-----------------------------------"<<endl;
    cout<<"Masukkan Nama Anda: ";cin>>nama;
    cout<<"Masukkan Jumlah Paket yang akan Disumbangkan: ";cin>>jmlpaket;
    cout<<"Ingin Menambah Sumbangan Tunai (y/t) ? ";cin>>tunai;

    if (tunai == 'y')
    {
        cout<<"Jumlah Sumbangan Tunai Anda: ";cin>>jmltunai;
    } else {
        jmlpaket = 0;
    }


    total= jmlpaket * harga;
    GT= total + jmltunai;

    cout<<"Terima Kasih "<<nama<<" Atas Bantuan Anda"<<endl;
    cout<<"Paket yang Anda Sumbangkan: "<<namapaket<<endl;
    cout<<"Sumbangan Tunai Anda: "<<jmltunai<<endl;
    cout<<"Toyal Yang Harus Dibayarkan: "<<GT<<endl;
    

}