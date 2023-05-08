#include <iostream>

using namespace std;

struct kelompok
{
    string ketua;
    string anggota;
};
struct mahasiswa
{
    string nama;
    string nim;
};

int main()
{
    kelompok k[3];
    mahasiswa m[3] = {
        {"ucup", "20102007"},
        {"sari", "20102031"},
        {"tono", "20102023"},
    };

    k[0].anggota = m[1].nama;
    k[1].anggota = m[2].nama;
    k[0].ketua   = m[0].nama;

    cout << "Angggota pertama : " << k[0].anggota << "\t" << m[1].nim << endl;
    cout << "Angggota kedua   : " << k[1].anggota << "\t" << m[2].nim << endl;
    cout << "ketuanya         : " << k[0].ketua << "\t" << m[0].nim << endl;
}





