#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    float ipk;
};

void tampilData(const vector<Mahasiswa> &dataMahasiswa){
    cout<<"------------------------------"<<endl;
    for (const auto &data : dataMahasiswa)
    {
        cout<<"Nama :"<<data.nama<<endl;
        cout<<"NIM :"<<data.nim<<endl;
        cout<<"IPK :"<<data.ipk<<endl;
        cout<<"------------------------------"<<endl;
    }
}

Mahasiswa cariData(int nim, const vector<Mahasiswa> &dataMahasiswa){
    for (const auto &data : dataMahasiswa)
    {
        if (data.nim == nim)
        {
        cout<<"Nama :"<<data.nama<<endl;
        cout<<"NIM :"<<data.nim<<endl;
        cout<<"IPK :"<<data.ipk<<endl;
        }else{
            cout<<"Tidak ada NIM Mahasiswa dengan NIM "<<nim;
        }
    }

}

// void tambahData(){

// }

int main()
{
    int input;
    int nim;
    vector<Mahasiswa> mhs ={
        {"Nakhalan",252310052,4.0},
        {"Dudan",252310032,3.0},
        {"Andi",252310050,3.5},
        {"Cuan",252310090,3.2},
    };
    cout<<"1. Menampilkan semua data :"<<endl;
    cout<<"2. Menampilkan data sesuai NIM :"<<endl;
    cin>>input;
    do
    {
        if (input == 1)
        {
        tampilData(mhs);
        }
        else if(input == 2){
        cout<<"Masukan NIM Mahasiswa :";
        cin>>nim;
        cariData(nim, mhs);
        }
    } while (input == 0);


    return 0;
}
