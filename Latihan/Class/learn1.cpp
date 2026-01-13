//class
#include <iostream>
using namespace std;

class mobil
{
public:
    string merk;
    int tahun;

    void infoMobil(){
        cout<<"Merek Mobil "<<merk<<" dengan tahun pembelian "<<tahun;
    }
};

int main()
{
    mobil mbl;

    cout<<"Masukan merek mobil :";
    cin>>mbl.merk;
    cout<<"masukan tahun mobil : ";
    cin>>mbl.tahun;

    mbl.infoMobil();

    return 0;
}
