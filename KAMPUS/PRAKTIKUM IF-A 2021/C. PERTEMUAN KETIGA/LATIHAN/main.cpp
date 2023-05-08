#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

//void dari pengisian biodata
void biodata(char arr[], char size)
{
    int jumlah;
    string nama[50], nim[50], alamat[50], hobi[50], jurusan[50];
    string *data[50];

    cout << " Masukkan Jumlah Mahasiswa Yang Akan Didata : ";
    cin >> jumlah;
    cout << endl;
    //jika users menginputkan lebih dari lima maka program tidak bisa di jalankan
    if (jumlah > 5)
    {
        cout << "                   404 PAGE                     " << endl;
        cout << "            Your Smart Custom Page              " << endl;
        cout << "         PROGRAM TIDAK DAPAT DIJALANKAN         " << endl;
    }
    //tapi jika kurang dari 5 atau 5 data saja maka program bisa di jalankan
    else
    {
        //perlulangan pendataan mahasiswa
        for (int i = 0; i < jumlah; i++)
        {
            cout << " Masukkan Data Mahasiswa ke - " << i + 1 << endl;
            cout << " Nama Mahasiawa    : ";
            cin >> nama[i];
            cout << " NIM Mahasiswa     : ";
            cin >> nim[i];
            cout << " Jurusan Mahasiswa : ";
            cin >> jurusan[i];
            cout << " Alamat Mahasiswa  : ";
            cin >> alamat[i];
            cout << " Hobi Mahasiswa    : ";
            cin >> hobi[i];
            cout << endl;
        }
        //perulangan tampilan data dan alamat dari yang sudah di inputkan
        for (int i = 0; i < jumlah; i++)
        {
            data[i] = &nama[i];
            data[i + 1] = &nim[i];
            data[i + 2] = &jurusan[i];
            data[i + 3] = &alamat[i];
            data[i + 4] = &hobi[i];
            //tampilan data dari yang sudah di inputkan
            cout << " ------ Data Mahasiswa ke " << i + 1 << " ------" << endl;
            cout << " Nama    : " << *data[i] << endl;
            cout << " NIM     : " << *data[i + 1] << endl;
            cout << " Jurusan : " << *data[i + 2] << endl;
            cout << " Alama   : " << *data[i + 3] << endl;
            cout << " Hobi    : " << *data[i + 4] << endl;
            cout << endl;

            //tampilan alamat dari data yang sudah di inputkan
            cout << " --- Alamat yang Anda masukkan ---" << endl;
            cout << " Nama    : " << data[i] << endl;
            cout << " Nim     : " << data[i + 1] << endl;
            cout << " Jurusan : " << data[i + 2] << endl;
            cout << " Alamat  : " << data[i + 3] << endl;
            cout << " Hobi    : " << data[i + 4] << endl;
            cout << " ---------------------------------- " << endl;
            cout << endl;
        }
    }
}
//badan main
int main()
{
    char data[2];
    //system loading pada awal program
    for (int i = 0; i <= 10000; i++)
    {
        cout << endl
             << "Loading . . . " << i << "%" << endl;
        system("cls");
    }
    cout << "        PROGRAM PENDATAAN MAHASISWA           " << endl;
    //pemanggilan void
    biodata(data, 2);
    return 0;
}
