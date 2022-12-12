#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string prodi;
    float ipk;
};

int main(){
    mahasiswa mhs[5];
    int jum;

    cout<<"Aplikasi Data Mahasiswa"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Data Mahasiswa yang Ingin Dimasukkan (Max 5): ";
    cin>>jum;

    for (int i=0; i<jum; i++){
        cout<<"Data Mahasiswa Ke-"<<i+1<<endl;
        cout<<"Masukkan Nama: ";cin>>mhs[i].nama;
        cout<<"Masukkan NIM: ";cin>>mhs[i].nim;
        cout<<"Masukkan Program Studi: ";cin>>mhs[i].prodi;
        cout<<"Masukkan IPK: ";cin>>mhs[i].ipk;
    }

    system ("cls");

    cout<<"Data yang Telah Dimasukkan"<<endl;
    cout<<"--------------------------"<<endl;

    for (int i=0; i<jum; i++){
        cout<<"Data Mahasiswa Ke-"<<i+1<<endl;
        cout<<"Nama: "<<mhs[i].nama<<endl;
        cout<<"NIM: "<<mhs[i].nim<<endl;
        cout<<"Program Studi: "<<mhs[i].prodi<<endl;
        cout<<"IPK: "<<mhs[i].ipk<<endl;
    }
}