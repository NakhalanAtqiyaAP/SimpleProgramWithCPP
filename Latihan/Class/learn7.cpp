//Inheritance
#include <iostream>
using namespace std;

class Orang
{
protected:
    string nama;
    int umur;
public:
Orang(){}
    Orang(string n, int u){
        nama = n;
        umur = u;
    }

    void tampilDataOrang(){
        cout<<"\nNama :"<<nama;
        cout<<"\nUmur :"<<umur;
    }
};

class Mahasiswa : public Orang{
private:
    string npm;
    string jurusan;
public:
    Mahasiswa(string n,int u,string np, string jur) : Orang(n, u){
        npm = np;
        jurusan = jur;
    }

    void tampilDataMahasiswa(){
        tampilDataOrang();
        cout<<"\nNPM :"<<npm;
        cout<<"\njurusan :"<<jurusan;
    }
};

int main()
{

    string nama,npm,jurusan;
    int umur;
    cout<<"Masukan nama:";
    getline(cin,nama);
    cout<<"Masukan umur:";
    cin>>umur;
    cin.ignore();

    cout<<"Masukan NPM:";
    getline(cin,npm);
    cout<<"Masukan jurusan:";
    getline(cin,jurusan);

    Mahasiswa mahasiswa(nama,umur,npm,jurusan);
    mahasiswa.tampilDataMahasiswa();

    return 0;
}
