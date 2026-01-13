//Array of object
#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string name,npm;
public:
    Mahasiswa(){}

    Mahasiswa(string n, string np){
        name = n;
        npm = np;
    }

    void input(){
      cout<<"Masukan nama:";
      getline(cin,name);
      cout<<"Masukan npm:";
      cin>>npm;
      cin.ignore();
    }

    void result(){
        cout<<"\nNama :"<<name;
        cout<<"\nNPM :"<<npm;
    }
};


int main()
{
    int n;
    cout<<"Jumlah data:";
    cin>>n;
    cin.ignore();

    Mahasiswa mhs[n];

    for (int i = 0; i < n; i++)
    {
    cout<<"Masukan Data Ke-"<<i+1<<endl;
    mhs[i].input();
    }

    cout<<"\nData Mahasiswa\n";
    for (int i = 0; i < n; i++)
    {
       mhs[i].result();
    }



    return 0;
}
