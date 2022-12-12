#include <iostream>
using namespace std;

main(){

    char nilai;
    cout<<"Masukkan Nilai Ujian (A-E)= ";cin>>nilai;

    switch (nilai)
    {
        case 'A': cout<<"Sangat Baik"; break;
        case 'B': cout<<"Baik"; break;
        case 'C': cout<<"Cukup"; break;
        case 'D': cout<<"Kurang"; break;
        case 'E': cout<<"Sangat Kurang"; break;
        default : cout<<"Tidak Valid";
    }

}