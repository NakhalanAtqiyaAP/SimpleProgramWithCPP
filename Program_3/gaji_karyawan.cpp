#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct karyawan {
    string nama;
    int gaji_pokok;
    int masa_kerja_tahun;
    double pajak_persen = 0.025;
    int bonus = 0;
    double potongan_pajak = 0.0;
    double gaji_bersih = 0.0;
};

struct bonus_gaji
{
    int min_tahun;
    double persen_bonus;
};

double hitungBonus(int masa_kerja){

    double persen_bonus;

    if (masa_kerja >= 5)
    {
    persen_bonus = 0.10;
    }
    else if(masa_kerja >= 3){
    persen_bonus = 0.05;
    }
    else{
    persen_bonus = 0.0;
    }

  return persen_bonus;
}

int hitungGaji(karyawan &data_karyawan, double persen_bonus ){

    data_karyawan.bonus = data_karyawan.gaji_pokok * persen_bonus;
    double total_penghasilan = data_karyawan.gaji_pokok + data_karyawan.bonus;
    data_karyawan.potongan_pajak = total_penghasilan * data_karyawan.pajak_persen;
    data_karyawan.gaji_bersih = total_penghasilan - data_karyawan.potongan_pajak;
   
   return 0;
}

int main()
{

  vector<karyawan> kry;

  int jumlah_karyawan;

  cout<<"=== Gaji Karyawan ==="<<endl<<endl;

  cout<<"Masukan jumlah karyawan yang mau di input:";
  cin>>jumlah_karyawan;



  for (int i = 0; i < jumlah_karyawan; i++)
  {
   karyawan data_baru;

    string nama;
    int gaji_pokok;
    int masa_kerja;

    cout<<"=============================="<<endl;

    cout<<"Masukan nama karyawan :";
    cin>>nama;
    cout<<"Masukan gaji pokok: ";
    cin>>gaji_pokok;
    cout<<"Masukan masa kerja pertahun: ";
    cin>>masa_kerja;

  data_baru.nama = nama;
  data_baru.gaji_pokok = gaji_pokok;
  data_baru.masa_kerja_tahun = masa_kerja;

  double persen = hitungBonus(data_baru.masa_kerja_tahun);
  hitungGaji(data_baru, persen);
  kry.push_back(data_baru);
  
  }

  cout<<"=========================================================================================="<<endl<<endl;
  cout<<"                                   Data Gaji Karyawan                                             "<<endl<<endl;

  cout<<"=========================================================================================="<<endl<<endl;
    cout << fixed << setprecision(2);
  cout<<"================== Data Karyawan =================="<<endl;

  for (const auto& pekerja : kry)
  {
    cout<<" - Nama : "<<pekerja.nama<<endl;
    cout<<" - Gaji Pokok: "<<pekerja.gaji_pokok<<endl;
    cout<<" - Masa Kerja Tahun: "<<pekerja.masa_kerja_tahun<<endl<<endl;
    cout<<"============== Pemotongan Gaji =============="<<endl;
    cout<<" - Potongan Pajak: "<<pekerja.potongan_pajak<<endl;
    cout<<" - Pajak Persen: "<<pekerja.pajak_persen<<endl<<endl;
    cout<<"============== Total Gaji =============="<<endl;
    cout<<" - Bonus: "<<pekerja.bonus<<endl;
    cout<<" - Gaji bersih: "<<pekerja.gaji_bersih<<endl<<endl;


  }
  
  return 0;
}