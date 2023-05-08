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

int main()
{
    int pilihan;
    int data;
    create();
    do
    {
        system("cls");
        cout << " -------------------" << endl;
        cout << " |1. Enqueue       |" << endl;
        cout << " |2. Dequeue       |" << endl;
        cout << " |3. Tampil        |" << endl;
        cout << " |4. Clear         |" << endl;
        cout << " |5. Exit          |" << endl;
        cout << " -------------------" << endl;
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
            clear();
        }
        system("pause");
    } while (pilihan != 5);

    return 0;
}
