#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

struct mata_kuliah
{
    string nama_matkul;
    int kkm;
};

struct mahasiswa
{
    string nama;
    vector<pair<string, int>> nilai_matkul;
    double rata_rata;
    int min;
    int max;
    int jumlah_tidak_lulus;
};

mata_kuliah cariMatkul(string nama_matkul, const vector<mata_kuliah> &daftar)
{
    for (const auto &item : daftar)
    {
        if (item.nama_matkul == nama_matkul)
        {
            return item;
        }
    }
    return {"Tidak ditemukan", 0};
}

double averangeNilai(const vector<pair<string, int>> &nilai)
{
    if (nilai.empty())
    {
        return 0.0;
    }
    long long total = 0;

    for (const auto &pair : nilai)
    {
        total += pair.second;
    }

    return static_cast<double>(total) / nilai.size();
}

int minNilai(const vector<pair<string, int>> &nilai){
    if(nilai.empty()){
        return 0;
    }

  auto min_it = min_element(nilai.begin(), nilai.end(),
                [](const pair<string, int>& a, const pair<string, int>& b){
                    return a.second < b.second;
                });
    
        return min_it->second;
}

int maxNilai(const vector<pair<string, int>> &nilai){
    if(nilai.empty()){
        return 0;
    }

    auto max_it = max_element(nilai.begin(), nilai.end(),
               [](const pair<string, int>& a, const pair<string, int>& b){
                    return a.second < b.second;
               });

               return max_it->second;
}

int nilaiKKM(const vector<pair<string, int>> &nilai, const vector<mata_kuliah> &kkm){
    if(nilai.empty()){
        return 0;
    }

    int gagal_kkm = 0;

    for (const auto& nilai_mk : nilai)
    {
      string nama_matkul = nilai_mk.first;
      int nilai_matkul = nilai_mk.second;

      mata_kuliah matkul_data = cariMatkul(nama_matkul, kkm);

      if (matkul_data.kkm != 0 && nilai_matkul < matkul_data.kkm)
      {
        gagal_kkm++;
      }
      
    }
    
    return gagal_kkm;
    
}

int main()
{
    int nilai;
    int jumlah_mahasiswa;
    string matkul;

    vector<mata_kuliah> matakuliah = {
        {"IPA", 75},
        {"ALGORITMA", 75},
        {"PTI", 80},
    };

    cout << "=== Selamat Datang Petugas ===";
    cout << "\n------------------------------" << endl
         << endl;
    for (const auto &item : matakuliah)
    {
        cout << "Nama Mata Kuliah :" << item.nama_matkul << endl;
        cout << "KKM :" << item.kkm << endl
             << endl;
    }

    cout << "Silakan mau memasukan nilai berapa mahasiswa :";
    cin >> jumlah_mahasiswa;

    vector<mahasiswa> mahasiswa_data;

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        string nama_ms;
        mahasiswa data_baru;
        cout << "================================";
        cout << "\nSilakan Masukan nama mahasiswa: ";
        cin >> nama_ms;
        data_baru.nama = nama_ms;

        for (const auto &mk : matakuliah)
        {
            int input_nilai;
            cout << "Masukan nilai dengan matkul " << mk.nama_matkul << ": ";
            cin >> input_nilai;

            data_baru.nilai_matkul.push_back({mk.nama_matkul, input_nilai});
        }
        data_baru.rata_rata = averangeNilai(data_baru.nilai_matkul);
        data_baru.min = minNilai(data_baru.nilai_matkul);
        data_baru.max = maxNilai(data_baru.nilai_matkul);
        data_baru.jumlah_tidak_lulus = nilaiKKM(data_baru.nilai_matkul, matakuliah);
        


        mahasiswa_data.push_back(data_baru);
    }

    cout << "==== Data Mahasiswa ====" << endl
         << endl;
    cout << "------------------------------------------" << endl;
    for (const auto &data : mahasiswa_data)
    {
        cout << "Nama: " << data.nama << endl
             << "Nilai Rata-rata :" << data.rata_rata<<endl
              << "Nilai Max :" << data.max<<endl
               << "Nilai Min :" << data.min;

        
        

        cout << endl
             << endl;
        for (const auto &mk : data.nilai_matkul)
        {
            cout << " - " << mk.first << " : " << mk.second << endl;
        }
    cout << "------------------------------------------" << endl;
    if (data.jumlah_tidak_lulus == 0)
        {
            cout<<"\nKamu lulus disemua mata kuliah";
        }else{
            cout<<"\nKamu gagal dengan gagal di "<< data.jumlah_tidak_lulus 
            <<" Mata kuliah"<<endl;
        }
    }
    cout << "------------------------------------------" << endl;
    return 0;
}