#include<iostream>
using namespace std;

int main(){

    double tinggi,berat,umur,r,p,q,total;
    string kalimat;

    cout<<"Aplikasi Pencari Berat Badan Ideal"<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Hai, Masukkan Nama Anda:";cin>>kalimat;
    cout<<"Masukkan Tinggi Anda(cm):";cin>>tinggi;
    cout<<"Masukkan Berat Badan Anda(kg):";cin>>berat;
    cout<<"Masukkan Umur Anda:";cin>>umur;

    p=(88.4+13.4*berat);
    q=(4.8*tinggi);
    r=(5.68*umur);
    total=p+q-r;
    cout<<"Maka Kebutuhan Kalori Anda Adalah Sebesar"<<total<<"kkal";
}