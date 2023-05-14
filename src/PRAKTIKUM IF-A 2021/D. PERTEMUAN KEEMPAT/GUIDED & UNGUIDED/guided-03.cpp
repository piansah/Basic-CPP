#include <iostream>

using namespace std;

struct pegawai
{
    string nama;
    string alamat;
    int gaji;
};

int main()
{
    pegawai p1[100];
    int banyak;

    cout << "Masukkan banyak pegawai : ";
    cin >> banyak;

    for (int i = 0; i < banyak; i++)
    {
        cout << "Masukkan nama : ";
        cin >> p1[i].nama;
        cout << "Masukkan alamat : ";
        cin >> p1[i].alamat;
        cout << "Masukkan Gaji : ";
        cin >> p1[i].gaji;
        cout << endl;
    }
    for (int i = 0; i < banyak; i++)
    {
        cout << "Nama : " << p1[i].nama << endl;
        cout << "Alamat : " << p1[i].alamat << endl;
        cout << "Gaji : " << p1[i].gaji << endl;
        cout << endl;
    }
    return 0;
}
