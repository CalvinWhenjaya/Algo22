#include <iostream>
using namespace std;

struct Mahasiswa
{
    char Nim[9];
    string Nama;
    char MataKuliah[30];
    int NilaiAngka;
    char NilaiHuruf;
};

int main(){

    Mahasiswa Mhs[3];
    int a=0;

    cout<<"=== DATA NILAI MAHASISWA ==="<<endl;
    cout<<endl;

    for (a=0; a<3; a++){
        cout<<"NIM         : ";
        cin>>Mhs[a].Nim;
        cout<<"Nama        : ";
        cin>>Mhs[a].Nama;
        cout<<"Mata Kuliah : ";
        cin>>Mhs[a].MataKuliah;
        cout<<"Nilai Angka : ";
        cin>>Mhs[a].NilaiAngka;
        cout<<endl;
                        
        if (Mhs[a].NilaiAngka >= 0 && Mhs[a].NilaiAngka <=50)
        {
            Mhs[a].NilaiHuruf = 'C';
        } else if (Mhs[a].NilaiAngka > 50 && Mhs[a].NilaiAngka <= 80)
        {
            Mhs[a].NilaiHuruf = 'B';
        } else if (Mhs[a].NilaiAngka > 80 && Mhs[a].NilaiAngka <= 100)
        {
            Mhs[a].NilaiHuruf = 'A';
        }
    }

    for (a=0; a<3; a++){
        cout<<"\nNIM         : "<<Mhs[a].Nim;
        cout<<"\nNama        : "<<Mhs[a].Nama;
        cout<<"\nMata Kuliah : "<<Mhs[a].MataKuliah;
        cout<<"\nNilai Angka : "<<Mhs[a].NilaiAngka;
        cout<<"\nNilai Huruf : "<<Mhs[a].NilaiHuruf<<endl;
    }

}