#include <iostream>
using namespace std;

int main(){

    string nama;
    float kehandsomeman;

    cout<<"Masukkan Nama Anda: ";
    getline(cin,nama);
    cout<<"Masukkan Nilai Kegantengan (1-100): ";cin>>kehandsomeman;

    cout<<"---------------------------"<<endl;

    if (kehandsomeman < 1)
    {
        cout<<"Selamat "<<nama<<", Anda Alien";
    } else if (kehandsomeman < 85) {
        cout<<"Selamat "<<nama<<", Anda Perlu Oplas";
    } else if (kehandsomeman >= 85 && kehandsomeman <= 100) {
        cout<<"Selamat "<<nama<<", Anda Ganteng";
    } else if (kehandsomeman > 100) {
        cout<<"Waduh "<<nama<<", Anda Bukan Manusia";
    }

    return 0;

}