#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

struct barang
{
  string nama_barang;
  int harga_barang;
};

struct transaksi
{
  string barang;
  int jumlah_barang;
  long long subtotal;
};

barang cariBarang(string nama_barang, const vector<barang> &daftar)
{
  for (const auto &item : daftar)
  {
    if (item.nama_barang == nama_barang)
    {
      return item;
    }
  }
  return {"Tidak ditemukan", 0};
}

int main()
{

  barang barang_item;
  int banyak_transaksi;
  int jumlah_item;
  string name_barang;
  int jumlah_bayar = 0;
  int uang_pelanggan = 0;
  int kembalian = 0;

  vector<barang> list_barang = {
      {"SAMPO", 2500},
      {"SOSIS", 5000},
      {"BERAS", 14000},
      {"KUE", 20000}};

  cout << "=== Selamat Datang Pelanggan ===";
  cout << endl
       << endl;

  cout << " Daftar List Barang " << endl;
  cout << "|   Barang   |   Harga   |" << endl;
  cout << "--------------------------" << endl;
  for (const auto &item : list_barang)
  {
    cout << "|   " << item.nama_barang << "    |";
    cout << "    " << item.harga_barang << "  |";
    cout << endl;
  }

  cout << "Silakan Masukan Jumlah Barang Yang Mau Dibeli :";
  cin >> banyak_transaksi;

  vector<transaksi> daftar_transaksi(banyak_transaksi);

  for (int i = 0; i < banyak_transaksi; i++)
  {
    do
    {
      cout << "Masukan Nama Barang:";
      cin >> name_barang;

      transform(name_barang.begin(), name_barang.end(), name_barang.begin(), ::toupper);
      barang_item = cariBarang(name_barang, list_barang);

      if (barang_item.harga_barang == 0)
      {
        cout << "Barang salah input, pastikan sesuai dengan yang ada di list" << endl;
      }
    } while (barang_item.harga_barang == 0);
    daftar_transaksi[i].barang = name_barang;

    cout << "Banyak Beli:";
    cin >> jumlah_item;

    daftar_transaksi[i].jumlah_barang = jumlah_item;
    daftar_transaksi[i].subtotal = (long long)barang_item.harga_barang * daftar_transaksi[i].jumlah_barang;
    jumlah_bayar += daftar_transaksi[i].subtotal;
  }

  cout << "Jumlah yang harus dibayar RP. " << jumlah_bayar << endl
       << endl;

  do
  {

    cout << "Masukan jumlah uang pelanggan: Rp. ";
    cin >> uang_pelanggan;

    if (uang_pelanggan <= jumlah_bayar)
    {
      cout << "uang harus lebih dari total pembelajaan" << endl;
    }

  } while (uang_pelanggan <= jumlah_bayar);

  kembalian += uang_pelanggan - jumlah_bayar;

  cout << "\nKembalian Rp. " << kembalian << endl;

  return 0;
}