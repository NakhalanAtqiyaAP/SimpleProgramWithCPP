//destructor
#include <iostream>
using namespace std;

class Array
{
private:
    int* data;
public:
    Array(){
        data = new int[5];
        cout<<"Memory diakolokasikan"<<endl;
    }
    ~Array(){
        delete[] data;
        cout<<"Memory Dibersihkan"<<endl;
    }
};



int main()
{
    Array a;
    return 0;
}
