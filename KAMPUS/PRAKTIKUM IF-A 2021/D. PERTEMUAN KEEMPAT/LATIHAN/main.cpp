#include <iostream>
#include <string>

using namespace std;
//program struct
struct barang
{
    string kode_barang;
    int stock_barang;
    string nama_barang;
    float harga_barang;
};
//badan main
int main()
{
    barang B1[101];
    int jumlah;
    //menginputkan data
    cout << "Masukan jumlah barang yang ingin di data : ";
    cin >> jumlah;
    cout << endl;
    //ketika users menginputkan lebih dari 20 maka program tidak akan digunakan
    if (jumlah > 20)
    {
        cout << "MELEBIHI JUMLAH DATA" << endl;
    }
    //ketika users menginputkan kurang atau dua puluh data maka program bisa digunakan
    else
    {
        //menginputkan data barang
        cout << ":::::::::::::::::::::::::::::::::::::::::" << endl;
        for (int i = 0; i < jumlah; i++)
        {
            cout << "DATA BARANG KE-" << i + 1 << endl;
            cout << "Masukkan Kode         : ";
            cin >> B1[i].kode_barang;
            cout << "Masukkan Nama Barang  : ";
            cin >> B1[i].nama_barang;
            cout << "Masukkan Stock        : ";
            cin >> B1[i].stock_barang;
            cout << "Masukkan Harga barang : ";
            cin >> B1[i].harga_barang;
            cout << endl;
        }
        //menampilkan data barang
        cout << ":::::::::::::::::::::::::::::::::::::::::" << endl;
        for (int i = 0; i < jumlah; i++)
        {
            cout << "DATA KE-" << i + 1 << endl;
            cout << "kode        : " << B1[i].kode_barang << endl;
            cout << "Nama barang : " << B1[i].nama_barang << endl;
            cout << "Stock       : " << B1[i].stock_barang << endl;
            cout << "Harga       : " << B1[i].harga_barang << endl;
            cout << endl;
        }
    }
    return 0;
}

