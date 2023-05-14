//NIM : 20102007
//Nama : ALIF ALPIAN SAHRUL MUHAROM
//Kelas : S1-IF08-A

#include <iostream>

using namespace std;

int main()
{
    //variabel array dapat menampung 100 data
    int harga[100] = {};

    for (int i = 0; i < 10; i++)
    {
        //pemasukkan data
        cout << "Masukkan harga: ";
        cin >> harga[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        //data ditampung
        cout << "Harganya: " << harga[i] << endl;
    }
    return 0;
}














