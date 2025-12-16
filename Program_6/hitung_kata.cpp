#include <iostream>

using namespace std;

void hitungPanjangString(char kalimat[])
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

  cout<<"Panjang dari string tersebut adalah "<<jumlahKata<<endl;
  
}

int main()
{
  char kalimat[255];
  cout<<"Masukan sebuah kalimat: ";
  cin.getline(kalimat, 255);

  hitungPanjangString(kalimat);


  return 0;
}
