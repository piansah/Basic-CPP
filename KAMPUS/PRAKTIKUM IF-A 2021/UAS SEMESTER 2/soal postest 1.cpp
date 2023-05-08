// Alif Alpian Sahrul Muharom
// S1-IF08-A
// 20102007

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 6

using namespace std;

float jum = 0;

//deklarasi variabel
typedef struct
{
    string nama[100];
    int rekening[MAX];
    int head;
    int tail;
} Queue;
Queue antrian;

//fungsi membuat antrian
void Create()
{
    antrian.head = antrian.tail = -1;
}
//fungsi menghosongkan data
int isEmpty()
{
    if (antrian.tail == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (antrian.tail == MAX - 1)
        return 1;
    else
        return 0;
}
//fungsi memasukan data
void Enqueue(string nama, int rekening)
{
    if (isEmpty() == 1)
    {
        antrian.head = antrian.tail = 0;
        antrian.nama[antrian.tail] = nama;
        antrian.rekening[antrian.tail] = rekening;
        cout << endl;
        cout << "Data " << antrian.nama[antrian.tail] << " masuk" << endl;
        cout << endl;
    }
    else if (isFull() == 0)
    {
        antrian.tail++;
        antrian.nama[antrian.tail] = nama;
        antrian.rekening[antrian.tail] = rekening;
        cout << endl;
        cout << "Data " << antrian.nama[antrian.tail] << " masuk" << endl;
        cout << endl;
    }
    else if (isFull() == 1)
    {
        cout << "Antrian penuh" << endl;
    }
}

//fungsi memasukan data
void Dequeue()
{
    string temp, temp2;
    if (isEmpty() == 1)
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        temp = antrian.nama[antrian.head];
        temp2 = antrian.rekening[antrian.head];
        for (int i = antrian.head; i < antrian.tail; i++)
        {
            antrian.nama[i] = antrian.nama[i + 1];
            antrian.rekening[i] = antrian.rekening[i + 1];
        }
        antrian.tail--;
        cout << "Antrian yang keluar : " << temp << endl;
    }
}

//fungsi menghapus data
void Clear()
{
    antrian.head = antrian.tail = -1;
    cout << "data clear\n";
}

//fungsi menampilkan data
void Tampil()
{
    if (isEmpty() == 0)
    {
        cout << "== No. Antrian yang Belum dilayani ==" << endl;
        for (int i = 0; i <= antrian.tail; i++)
        {
            cout << "----------------------------------" << endl;
            cout << "Nama Nasabah       : " << antrian.nama[i] << endl;
            cout << "Nomor Rekening     : " << antrian.rekening[i] << endl;
            cout << "----------------------------------" << endl;
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "data kosong!";
    }
}

//fungsi main
int main()
{
    int pilihan, rekening, urutan, k = 1;
    string nama;
    Create();
    do
    {
        system("cls");
        cout << "===== PROGRAM ANTRIAN BANK ======" << endl;
        cout << "=================================" << endl;
        cout << "|1. Tambahkan Nasabah           |" << endl;
        cout << "|2. Panggilkan Nasabah          |" << endl;
        cout << "|3. Tampilkan daftar antrian    |" << endl;
        cout << "|4. Hapus Semua daftar Nasabah  |" << endl;
        cout << "|5. Exit                        |" << endl;
        cout << "=================================" << endl;
        cout << " Masukan Pilih  : ";
        cin >> pilihan;
        cout << endl;
        switch (pilihan)
        {
        case 1:
            urutan = k;
            cout << "No. Antrian          : " << k << endl;
            cout << "Antian yang Menunggu : " << antrian.tail + 1 << endl;
            cout << "Nama Nasabah         : ";
            cin >> nama;
            cout << "No Rekening          : ";
            cin >> rekening;
            Enqueue(nama, rekening);
            k++;
            break;
        case 2:
            cout << "Silahkan! Anda Dipanggil!" << endl;
            Dequeue();
            break;
        case 3:
            Tampil();
            break;
        case 4:
            Clear();
            break;
        case 5:
            cout << "----PROGRAM BERAKHIR----" << endl;
            cout << endl;
            break;
        default:
            cout << "-----PAGE NOT FOUND-----" << endl;
            cout << endl;
            break;
        }
        system("pause");
    } while (pilihan != 5);

    return 0;
}