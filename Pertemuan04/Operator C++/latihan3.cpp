#include <iostream>
using namespace std;

int main(){

    float uts, uas, total;

    cout<<"Masukkan Nilai UTS = ";cin>>uts;
    cout<<"Masukkan Nilai UAS = ";cin>>uas;
    total=(uts+uas)/2;
    (total > 60) ? (cout<<"Lulus") : (cout<<"Tidak Lulus");

    return 0;
}