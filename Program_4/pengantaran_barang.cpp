#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct barang
{
    double berat;
    double jarak;
    double harga;
};

double hitungBiaya(barang &data_baru,double harga, double jarak, double berat){
    
    if (berat <= 5)
    {
        harga += 10000;
    }else if (berat > 5)
    {
        harga += 15000;
    }
    
    if (jarak <= 100)
    {
       harga += 25000;
    }else if(jarak > 100){
        harga += 50000;
    }
    
    data_baru.harga = harga;

    return 0;
}



int main()
{

  vector <barang> brg;
  barang data_barang;

  cout<<" ==== SELAMAT DATANG DIPENGANTARAN JPP ===="<<endl<<endl<<endl;

    cout<<"=== Masukan Barang ==="<<endl<<endl;

    cout<<"Masukan harga barang: ";
    cin>>data_barang.harga;

    cout<<"Masukan berat barang: ";
    cin>>data_barang.berat;

    cout<<"Masukan jarak yang ditempuh barang: ";
    cin>>data_barang.jarak;
    
    hitungBiaya(data_barang, data_barang.harga, data_barang.jarak, data_barang.berat);
    brg.push_back(data_barang);


    cout<<fixed<<setprecision(1);
    for (const auto& barang : brg)
    {
        cout<<"Harga :"<<barang.harga<<endl;
        cout<<"Berat :"<<barang.berat<<endl;
        cout<<"Jarak :"<<barang.jarak<<endl;
    }
    

  return 0;
}