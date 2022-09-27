#include <iostream>
using namespace std;

int main(){

    int pil;
    float a,b,c;

    cout<<"Kalkulator Canggih"<<endl;
    cout<<"------------------"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Masukkan pilihan anda (1-5) = ";cin>>pil;

    switch (pil)
    {
    case 1: cout<<"Masukkan angka pertama = ";cin>>a;
            cout<<"Masukkan angka kedua = ";cin>>b;
        c = a + b;
        cout<<"Hasil penjumlahan = "<<c<<endl;
        break;
    case 2: cout<<"Masukkan angka pertama = ";cin>>a;
            cout<<"Masukkan angka kedua = ";cin>>b;
        c = a - b;
        cout<<"Hasil pengurangan = "<<c<<endl;
        break;
    case 3: cout<<"Masukkan angka pertama = ";cin>>a;
            cout<<"Masukkan angka kedua = ";cin>>b;
        c = a * b;
        cout<<"Hasil perkalian = "<<c<<endl;
        break;
    case 4: cout<<"Masukkan angka pertama = ";cin>>a;
            cout<<"Masukkan angka kedua = ";cin>>b;
        c = a / b;
        cout<<"Hasil pembagian = "<<c<<endl;
        break;

    int pil;
    int a,b,c;

    case 5: cout<<"Masukkan angka pertama = ";cin>>a;
            cout<<"Masukkan angka kedua = ";cin>>b;
        c = a % b;
        cout<<"Hasil modulus = "<<endl;
        break;
    default: cout<<"Masih tahap pengembangan. Pilih 1 - 5 saja ya guys"<<endl;
        break;
    }

}