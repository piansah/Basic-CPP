//NIM : 20102007
//Nama : ALIF ALPIAN SAHRUL MUHAROM
//Kelas : S1-IF08-A

#include <iostream>

using namespace std;

//prosedur input array
void inputan(string arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Masukkan nama: ";
        cin >> arr[i];
    }
    cout << endl;
}
//prosedur output array
void outputan(string arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Nama: " << arr[i] << endl;
    }
}

//pemanggilan array
int main()
{
    string nama[5];
    inputan(nama, 5);
    outputan(nama, 5);

    return 0;
}

