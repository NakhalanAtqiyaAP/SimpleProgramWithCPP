#include <iostream>

using namespace std;

void hitungPanjangKata(char kalimat[])
{
    int panjang = 0;
    int jumlahKata = 0;
    bool dalamKata = false;

  while (kalimat[panjang] != '\0')
  {
    if (kalimat[panjang] != ' ' && !dalamKata)
    {
        jumlahKata++;
        dalamKata = true;
    }
    else if(kalimat[panjang] == ' '){
        dalamKata = false;
    }
    
    panjang++;
  }

  cout<<"Panjang dari kata tersebut adalah "<<jumlahKata<<endl;
  
}

int main()
{
  char kalimat[255];
  cout<<"Masukan sebuah kalimat: ";
  cin.getline(kalimat, 255);

  hitungPanjangKata(kalimat);


  return 0;
}
