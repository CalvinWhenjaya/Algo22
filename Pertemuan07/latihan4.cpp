#include <iostream>
using namespace std;

int main(){

    string nama;
    float kehandsomeman;

    cout<<"Masukkan Nama: ";
    getline(cin,nama);
    cout<<"Masukkan Nilai Kegantengan: ";cin>>kehandsomeman;

    if (kehandsomeman>85)
    {
        cout<<"Selamat "<<nama<<", Anda Ganteng";
    } else {
        cout<<"Maaf "<<nama<<", Anda Kurang Ganteng";
    }
    
    return 0;

}