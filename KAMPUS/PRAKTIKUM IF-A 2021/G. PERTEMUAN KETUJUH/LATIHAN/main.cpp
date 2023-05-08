#include <iostream>
#include <windows.h>
#define MAX 8

using namespace std;

struct queue
{
    int data[MAX];
    int head;
    int tail;
} antrian;

void create()
{
    antrian.head = antrian.tail = -1;
}

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

void Enqueue(int data)
{
    if (isEmpty() == 1)
    {
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        cout << antrian.data[antrian.tail] << " masuk !" << endl;
        if (isEmpty() == 0)
        {
            for (int i = antrian.head; i <= antrian.tail; i++)
            {
                cout << antrian.data[i] << endl;
            }
            void tampil();
        }
        else
        {
            cout << "Data kosong!" << endl;
        }
    }
    else if (isFull() == 0)
    {
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        cout << antrian.data[antrian.tail] << " Masuk !" << endl;
    }
}

int dequeue()
{
    int i;
    int e = antrian.data[antrian.head];
    for (i = antrian.head; i <= antrian.tail - 1; i++)
    {
        antrian.data[i] = antrian.data[i + 1];
    }
    antrian.tail--;
    return e;
}

void clear()
{
    antrian.head = antrian.tail = -1;
    cout << "Data Clear" << endl;
}

void tampil()
{
    if (isEmpty() == 0)
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            cout << antrian.data[i] << " ";
            int jumlah = jumlah + antrian.data[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Data kosong ! " << endl;
    }
}

void oprasidata(int pill)
{
    int jumlah = 0;
    int banyak = antrian.tail + 1;
    float rata;

    if (isEmpty() == 0)
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            jumlah = jumlah + antrian.data[i];
        }
        rata = jumlah / banyak;

        switch (pill)
        {
        case 1:
            cout << "Jumlah data = " << jumlah << endl;
            break;
        case 2:
            cout << "Rata-Rata data = " << rata << endl;
            break;
        case 3:
            cout << "Banyak data = " << antrian.tail + 1 << endl;
            break;
        default:
            break;
        }
    }
    else
    {
        cout << " data kosong! " << endl;
    }
}

int main()
{
    int pilihan;
    int data;
    create();
    do
    {
        system("cls");
        cout << endl;
        cout << "       PROGRAM        " << endl;
        cout << " ---------------------" << endl;
        cout << " |1. Masukan Nilai   |" << endl;
        cout << " |2. Hapus Nilai     |" << endl;
        cout << " |3. Tampilkan Nilai |" << endl;
        cout << " |4. Banyaknya nilai |" << endl;
        cout << " |5. Jumlah Nilai    |" << endl;
        cout << " |6. Rata-Rata Nilai |" << endl;
        cout << " |7. Clear           |" << endl;
        cout << " |8. Exit            |" << endl;
        cout << " ---------------------" << endl;
        cout << " Masukan pilihan : ";
        cin >> pilihan;
        cout << endl;
        switch (pilihan)
        {
        case 1:
            cout << "Data = ";
            cin >> data;
            Enqueue(data);
            break;
        case 2:
            cout << "Elemen yang keluar = " << endl;
            dequeue();
            break;
        case 3:
            tampil();
            break;
        case 4:
            oprasidata(3);
            break;
        case 5:
            oprasidata(1);
            break;
        case 6:
            oprasidata(2);
            break;
        case 7:
            clear();
            break;
        case 8:
            return (0);
            break;
        default:
            cout << "Silahkan Masukan Pilihan yang tersedia" << endl;
        }
        system("pause");
    } while (pilihan != 9);

    return 0;
}
