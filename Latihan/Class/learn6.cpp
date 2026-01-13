//Vector of object
#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa
{
private:
    string nama,npm;
public:
    Mahasiswa(){}

    Mahasiswa(string n, string np){
        nama = n;
        npm = np;
    }

    void input(){
        cout<<"Masukan nama :";
        getline(cin,nama);
        cout<<"Masukan NPM :";
        cin>>npm;
        cin.ignore();
    }

    void result() const{
        cout<<"\nNama :"<<nama;
        cout<<"\nNPM :"<<npm<<endl;
    }
};



int main()
{
    vector<Mahasiswa> mhs;

    int n;

    cout<<"Jumlah data:";
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        Mahasiswa new_data;

        cout<<"Data ke-"<<i+1<<endl;
        new_data.input();
        mhs.push_back(new_data);
    }

    for (const auto &data : mhs)
    {
        data.result();
    }


    return 0;
}
