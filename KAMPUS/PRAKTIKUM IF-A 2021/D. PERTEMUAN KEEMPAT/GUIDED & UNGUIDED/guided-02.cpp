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
    pegawai p1[3] = {
        {"tono", "bandung", 2300000},
        {"sari", "banten", 1300000},
        {"ucup", "Banyumas", 1400000}};

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << " Nama   : " << p1[i].nama << endl;
        cout << " Alamat : " << p1[i].alamat << endl;
        cout << " Gaji   : " << p1[i].gaji << endl;
    }
}











