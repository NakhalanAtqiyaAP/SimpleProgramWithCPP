#include <iostream>

using namespace std;

void hitungPanjangString(char kalimat[])
{
    int panjang = 0;
  while (kalimat[panjang] != '\0')
  {
    panjang++;
  }

  cout<<"Panjang dari kalimat tersebut adalah "<<panjang<<endl;
  
}

int main()
{
  char kalimat[255];
  cout<<"Masukan sebuah kalimat: ";
  cin.getline(kalimat, 255);

  hitungPanjangString(kalimat);


  return 0;
}
