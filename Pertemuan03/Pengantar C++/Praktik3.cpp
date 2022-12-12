#include <iostream>
using namespace std;

#define tinggi 10
#define garis "---------"

int main(){

    const double pi = 3.14;

    double vol,r;

    cout<<"Program Mencari Volume Kerucut"<<endl;
    cout<<garis<<endl;

    cout<<"Masukkan Jari-Jari: ";cin>>r;

    vol=(pi*r*r)/tinggi;

    cout<<"Volume Kerucut Adalah: "<<vol;

    return 0;
}