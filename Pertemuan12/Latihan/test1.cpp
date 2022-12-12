#include <iostream>
using namespace std;

struct universitas
{
    string prodi, rektor;
    int niu;
};

int main(){
    universitas u;
    u.prodi = "TPL";
    cout<<u.prodi<<endl;
}