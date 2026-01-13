//public, private
#include <iostream>
using namespace std;

class Persegi
{
private:
    int sisi;
public:
    int Luas(int s){
        sisi = s;

        return sisi * sisi;
    }
};


int main()
{
    Persegi persegi;
    int sisi;
    cout<<"Masukan sisi :";
    cin>>sisi;

    cout<<"Luas Persegi:"<<persegi.Luas(sisi);
    return 0;
}
