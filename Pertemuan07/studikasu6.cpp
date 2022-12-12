#include <iostream>
using namespace std;

int main(){

    int tahun;

    cobalagi:

    cout<<"Masukkan Tahun: ";cin>>tahun;

    if (tahun<1900 || tahun>2020)
    {
        goto cobalagi;
    } else if (tahun >= 1900 && tahun <= 2020)
    { if (tahun % 4 == 0)
        cout<<"Tahun Kabisat"<<endl;
    } else {
        cout<<"Bukan Tahun Kabisat"<<endl;
    }
    
 
}