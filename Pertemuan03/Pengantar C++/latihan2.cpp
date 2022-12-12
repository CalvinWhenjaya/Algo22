#include<iostream>
#include<string>
using namespace std;

int main(){

    double tinggi,p,q,total;
    string kalimat;

    cout<<"Aplikasi Pencari Berat Badan Ideal"<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Hai, Masukkan Nama Anda: ";cin>>kalimat;
    getline(cin,kalimat);
    cout<<"Masukkan Tinggi Anda(cm): ";cin>>tinggi;

    p=(tinggi-100);
    q=(p*0,1);
    total=p-q;
    cout<<"Jadi Untuk Saudara "<<kalimat<<" Berat Badan Ideal Anda Adalah "<<total<<"Kg";
}