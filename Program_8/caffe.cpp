#include <iostream>
#include <vector>
using namespace std;

struct menu{
  string nama;
  double harga;
};

struct transaksi
{
  string nama_produk;
  int jumlah_beli;
  double subtotal;
};


int main()
{
  menu menu_caffe;
  bool member;
  int jumlah_item;

  vector <menu> list_menu = {
  {"Latte", 23000},
  {"Americano", 20000}
  };

cout<<"=== Selamat Datang Di Caffe TOEI ==="
    <<endl
    <<endl;

    cout<<"         Daftar List Menu         "<<endl;
    cout<<"   ---------------------------   "<<endl;
    cout<<"   Nama            |        Harga   "<<endl;
    for (const auto &item : list_menu)
    {
    cout<<"   "<<item.nama<<"       |       "<<item.harga<<endl;
    }
    
    

  return 0;
}