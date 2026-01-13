#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string nama;
    int npm;
public:
    Mahasiswa(string nm, int n){
        nama = nm;
        npm = n;
    }

    void result(){
        cout<<"Nama   :"<<nama;
        cout<<"\nNPM    :"<<npm;
    }
};




int main()
{
    string nama;
    int npm;

    cout<<"Masukan nama:";
    getline(cin,nama);
    cout<<"Masukan NPM:";
    cin>>npm;

    Mahasiswa mhs(nama, npm);
    mhs.result();

    return 0;
}
