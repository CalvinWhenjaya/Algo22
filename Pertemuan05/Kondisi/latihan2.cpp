#include <iostream>
using namespace std;

int main (){

    string nama, namakamar, keterangan, y, n;
    int jeniskamar, lamainap, harga, sarapan, totalbayar;

    cout<<"Hotel Bahagia"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1. VVIP (1.000.000)"<<endl;
    cout<<"2. VIP (750.000)"<<endl;
    cout<<"3. Standard (500.000)"<<endl;
    cout<<"4. Melati (250.000)"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Masukkan Nama Anda: ";
    getline(cin,nama);
    cout<<"Masukkan Jenis Kamar: ";cin>>jeniskamar;
    cout<<"Lama Inap: ";cin>>lamainap;
    cout<<"Dengan Sarapan (y/n) 50rb/hari: ";cin>>y;
    cout<<"--------------------------------"<<endl;

    switch (jeniskamar)
    {
    case 1 : namakamar = "VVIP" ; harga = 1000000 ;
        break;
    case 2 : namakamar = "VIP" ; harga = 750000 ;
        break;
    case 3 : namakamar = "Standard" ; harga = 500000 ;
        break;
    case 4 : namakamar = "Melati" ; harga = 250000 ;
        break;
    default: cout<<"Kami Hanya Menyediakan 4 Jenis Kamar Saja Saat ini"<<endl;
        break;
    }

    cout<<"Terima Kasih "<<nama<<endl;
    cout<<"Kamar Anda "<<namakamar<<endl;
    if(sarapan == 'y'){
    sarapan = lamainap * 50000;
        cout<<"Lama Menginap "<<lamainap<<" Malam dengan Sarapan"<<endl;
    } else {
    sarapan = lamainap * 0;
        cout<<"Lama Menginap "<<lamainap<<" Malam"<<endl;
    }
    totalbayar = lamainap * harga + sarapan;
    cout<<"Total Bayar: "<<totalbayar<<endl;

    return 0;

}