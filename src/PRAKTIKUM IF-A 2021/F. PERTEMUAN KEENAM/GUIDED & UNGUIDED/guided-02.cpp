#include <iostream>
#include <windows.h>
#define max 20 //menetapkan max 20 (konstanta)

using namespace std;

struct Stack
{
    int atas;
    char data[max];
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

void push(char data)
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
        cout << "Kata : ";
        for (int i = 0; i <= T.atas; i++)
        {
            cout << T.data[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Tumpukan kosong" << endl;
    }
}

void dataTukar()
{
    if (isKosong() == 0)
    {
        cout << "Kata setelah ditukar : " << endl;
        for (int i = T.atas; i >= 0; i--)
        {
            cout << T.data[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Tumpukan kosong" << endl;
    }
}

int main()
{
    char huruf;
    int pilihan;

    initStack();

    do
    {
        system("cls");
        cout << "==============Menu==============" << endl;
        cout << "1. Memasukkan data              " << endl;
        cout << "2. Menghapus data               " << endl;
        cout << "3. Menampilkan data             " << endl;
        cout << "4. Menampilkan data yang ditukar" << endl;
        cout << "5. Keluar" << endl;
        cout << "==============Menu==============" << endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan;
        cout << endl;

        if (pilihan == 1)
        {
            cout << "Masukkan data : ";
            cin >> huruf;
            push(huruf);
        }
        else if (pilihan == 2)
        {
            pop();
        }
        else if (pilihan == 3)
        {
            tampil();
        }
        else if (pilihan == 4)
        {
            dataTukar();
        }
        else
        {
            return 0;
        }
        system("pause");
    } while (pilihan != 5);

    return 0;
}
