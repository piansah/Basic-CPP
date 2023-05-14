/*
Nama  : Alif Alpian Sahrul Muharom
Nim   : 20102007
Kelas : S1-IF08-A
*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *head, *tail;

void initHead()
{
    head = tail = NULL;
}

int isEmpty()
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

void insertDepan(int d)
{
    node *baru = new node;
    baru->data = d;
    baru->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

void insertBelakang(int d)
{
    node *baru = new node;
    baru->data = d;
    baru->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

void deleteDepan()
{
    node *hapus;
    if (isEmpty() == 0)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!";
    }
}

void deleteBelakang()
{
    node *hapus;
    node *bantu;
    if (isEmpty() == 0)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!";
    }
}

void clearList()
{
    node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
}

void tampilList()
{
    node *bantu;
    bantu = head;
    if (isEmpty() == 0)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!";
    }
}

void header()
{
    system("cls");
    cout << "====================" << endl;
    cout << "PROGRAM LINKED LIST" << endl;
    cout << "====================" << endl;
}

int main()
{
    initHead();
    int menu;
    int databaru;
    do
    {
        header();
        cout << "1. Insert depan" << endl;
        cout << "2. Insert belakang" << endl;
        cout << "3. Hapus depan" << endl;
        cout << "4. Hapus belakang" << endl;
        cout << "5. Tampilkan list" << endl;
        cout << "6. Hapus semua" << endl;
        cout << "7. Exit" << endl;
        cout << "Masukkan piihan: ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "Masukkan data: ";
            cin >> databaru;
            insertDepan(databaru);
            system("pause");
            break;
        case 2:
            cout << "Masukkan data: ";
            cin >> databaru;
            insertBelakang(databaru);
            system("pause");
            break;
        case 3:
            deleteDepan();
            system("pause");
            break;
        case 4:
            deleteBelakang();
            system("pause");
            break;
        case 5:
            tampilList();
            system("pause");
            break;
        case 6:
            clearList();
            system("pause");
            break;
        default:
            cout << "Masukkan salah" << endl;
            system("pause");
        }
    } while (menu != 7);

    return 0;
}
