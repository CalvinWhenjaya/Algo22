#include <iostream>
using namespace std;

struct universitas
{
    string prodi, rektor;
    int niu;
};

int main(){
    universitas u[100];
    for (int a=0; a<2; a++){
        cout<<"NIU: ";cin>>u[a].niu;
        cout<<"Prodi: ";cin>>u[a].prodi;
        cout<<"Rektor: ";cin>>u[a].rektor;
        cout<<endl;
    }

    for (int a=0; a<2; a++){
        cout<<"\n\nNIU: "<<u[a].niu;
        cout<<"\nProdi: "<<u[a].prodi;
        cout<<"\nRektor: "<<u[a].rektor;
    }
}
