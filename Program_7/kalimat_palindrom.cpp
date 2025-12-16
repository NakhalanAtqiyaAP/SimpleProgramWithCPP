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

void pembalikKata(char kalimat[])
{
    int panjang = 0;
    while (kalimat[panjang] != '\0')
    {
       panjang++;
    }
    cout<<"kalimat balik :";
    for (int i = panjang - 1; i >= 0; i--)
    {
        cout<<kalimat[i];
    }
  
}

void palindrom(char kalimat[]){
    int panjang = 0;
    bool isPalindrom = true;
    while (kalimat[panjang] != '\0')
    {
        panjang++;
    }

    for (int i = 0; i < panjang / 2; i++)
    {
        if (kalimat[i] != kalimat[panjang - 1 - i])
        {
            isPalindrom = false;
            break;
        }
        
    }
    if (isPalindrom)
    {
        cout<<"Kalimat tersebut palindrom"<<endl;
    }else{
        cout<<"Kalimat tersebut bukan palindrom"<<endl;
    }
    
    
}



int main()
{
  char kalimat[255];
  cout<<"Masukan sebuah kalimat: ";
  cin.getline(kalimat, 255);

  hitungPanjangKata(kalimat);
  pembalikKata(kalimat);
  cout<<endl;
  palindrom(kalimat);


  return 0;
}
