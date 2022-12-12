#include <iostream>
using namespace std;

int main(){

    string nama, nilaihuruf, predikat;
    int nilai, nilaitugas, uts, uas;

    cout<<"Masukkan Nama Anda = ";cin>>nama;
    cout<<"Masukkan Nilai Tugas = ";cin>>nilaitugas;
    cout<<"Masukkan Nilai UTS = ";cin>>uts;
    cout<<"Masukkan Nilai UAS = ";cin>>uas;

    nilai = (nilaitugas + uts + uas) / 3;

    switch (nilai)
    {
    case 0 ... 20 : nilaihuruf = "E"; predikat = "Mendekati Cukup";
        break;
    case 21 ... 40 : nilaihuruf = "D"; predikat = "Cukup";
        break;;
    case 41 ... 60 : nilaihuruf = "C"; predikat = "Cukup Baik";
        break;
    case 61 ... 80 : nilaihuruf = "B"; predikat = "Baik";
        break;
    case 81 ... 100 : nilaihuruf = "A"; predikat = "Sangat Baik";
        break;
    default: cout<<"Maaf Nilai Anda Tidak Mencukupi"<<endl;
        break;
    }

    cout<<"---------------------------------"<<endl;
    cout<<"Selamat "<<nama<<endl;
    cout<<"Nilai Anda = "<<nilai<<endl;
    cout<<"Nilai Huruf = "<<nilaihuruf<<endl;
    cout<<"Predikat = "<<predikat<<endl;

}