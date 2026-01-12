#include <iostream>
using namespace std;

class Persegi
{
private:
    int sisi;
public:
    void Luas(int s){
        sisi = s;
        sisi *= sisi;
        cout<<sisi;
    }
};





int main()
{
    Persegi persegi;
    int sisi;
    cout<<"Masukan sisi :";
    cin>>sisi;

    persegi.Luas(sisi);
    return 0;
}
