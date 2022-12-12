#include <iostream>
using namespace std;

int main(){

    string nama;
    int kehandsomeman;

    cout<<"Masukkan Nama Anda: ";
    getline(cin,nama);
    cout<<"Masukkan Nilai Kegantengan: ";cin>>kehandsomeman;

    (kehandsomeman>85) ? (cout<<"Selamat Anda Ganteng") : (cout<<"Maaf Anda Kurang Ganteng");

    return 0;

}