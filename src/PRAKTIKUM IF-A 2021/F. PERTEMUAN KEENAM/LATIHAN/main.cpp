
//ALIF ALPIAN SAHRUL MUHAROM
//S1-IF08-A
//20102007

#include <iostream>
#include <windows.h>
#define max 5 //menetapkan max 5 (konstanta)

using namespace std;

struct Stack
{
    int atas;
    int data[max];
} T;

void initStack()
{
    T.atas = -1;
}

int isKosong()
{
    if (T.atas == -1)
        return 1;
    else
        return 0;
}

int isPenuh()
{
    if (T.atas == max - 1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isKosong() == 1)
    {
        T.atas++;
        T.data[T.atas] = data;
        cout << "Data " << data << " masuk ke dalam stack" << endl;
    }
    else if (isPenuh() == 0)
    {
        T.atas++;
        T.data[T.atas] = data;
        cout << "Data " << data << " masuk ke dalam stack" << endl;
    }
    else
    {
        cout << "Tumpukan penuh" << endl;
    }
}

void pop()
{
    if (isKosong() == 0)
    {
        T.atas--;
        cout << "Data teratas terambil" << endl;
    }
    else
    {
        cout << "Tumpukan kosong" << endl;
    }
}

void tampil()
{
    if (isKosong() == 0)
    {
        for (int i = T.atas; i >= 0; i--)
        {
            cout << "Tumpukan ke " << i << " : " << T.data[i] << endl;
        }
    }
    else
    {
        cout << "Tumpukan kosong" << endl;
    }
}

int main()
{
    int pilihan, bilangan;

    initStack();

    do
    {
        system("cls");
        cout << "=========Menu=========" << endl;
        cout << "1. Memasukkan data    " << endl;
        cout << "2. Menghapus data     " << endl;
        cout << "3. Menampilkan data   " << endl;
        cout << "4. Keluar             " << endl;
        cout << "======================" << endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan;
        cout << endl;

        if (pilihan == 1)
        {
            cout << "Masukkan data : ";
            cin >> bilangan;
            push(bilangan);
        }
        else if (pilihan == 2)
        {
            pop();
        }
        else if (pilihan == 3)
        {
            tampil();
        }
        else
        {
            return 0;
        }
        system("pause");
    } while (pilihan != 4);

    return 0;
}


