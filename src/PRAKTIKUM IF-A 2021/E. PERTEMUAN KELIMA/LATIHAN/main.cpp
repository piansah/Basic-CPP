/*
Nama  : Alif Alpian Sahrul Muharom
Nim   : 20102007
Kelas : S1-IF08-A
*/

#include <iostream>

using namespace std;

struct datamhs
{
    string nama;
    int nim;
    datamhs *next;
};
datamhs *head;

void inithead()
{
    head = NULL;
}
int isempty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insertBelakang(int nim, string nama)
{
    datamhs *baru, *bantu;
    baru = new datamhs;
    baru->nim = nim;
    baru->nama = nama;
    baru->next = NULL;

    if (isempty() == 1)
    {
        head = baru;
        head->next = NULL;
    }
    else
    {
        bantu = head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

void insertdepan(int nim, string nama)
{
    datamhs *baru;
    baru = new datamhs;
    baru->nim = nim;
    baru->nama = nama;
    baru->next = NULL;

    if (isempty() == 1)
    {
        head = baru;
        head->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

void deleteBelakang()
{
    datamhs *hapus, *bantu;
    string a;
    int b;
    if (isempty() == 0)
    {
        if (head->next != NULL)
        {
            bantu = head;
            while (bantu->next->next != NULL)
            {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            a = hapus->nama;
            b = hapus->nim;
            bantu->next = NULL;
            delete hapus;
        }
        else
        {
            a = head->nama;
            head = NULL;
            b = head->nim;
            head = NULL;
        }
        cout << b << " hapus " << endl;
        cout << endl;
    }
    else
    {
        cout << "  Kosong " << endl;
        cout << endl;
    }
}

void tampillist()
{
    datamhs *bantu;
    bantu = head;

    if (isempty() == 0)
    {
        while (bantu != NULL)
        {
            cout << bantu->nama << "\t";
            cout << bantu->nim << "\n";
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "  Kosong " << endl;
    }
}
int main()
{
    cout << " \t\t\t PROGRAM SENARAI BERANTAI \t\t\t " << endl;
    cout << endl;

    inithead();

    int nimbaru;
    string namabaru;
    for (int i = 1; i <= 4; i++)
    {
        cout << "Masukkan Nama Mahasiswa - " << i << " : ";
        cin >> namabaru;
        cout << "Masukkan Nim Mahasiswa  - " << i << " : ";
        cin >> nimbaru;
        insertBelakang(nimbaru, namabaru);
        cout << endl;
    }
    cout << endl;

    cout << endl;
    cout << "Data Mahasiswa : " << endl;
    cout << "Nama    Nim " << endl;
    tampillist();

    for (int i = 1; i <= 1; i++)
    {
        deleteBelakang();
    }

    cout << endl;
    cout << "Data Mahasiswa : " << endl;
    cout << "Nama    Nim " << endl;
    tampillist();

    cout << "Masukkan Nama  : ";
    cin >> namabaru;
    cout << "Masukkan NIM   : ";
    cin >> nimbaru;
    insertBelakang(nimbaru, namabaru);

    cout << endl;
    cout << "ISI LIST :" << endl;
    cout << endl;
    cout << "Data Mahasiswa : " << endl;
    cout << "Nama    Nim " << endl;
    tampillist();

    return 0;
}



