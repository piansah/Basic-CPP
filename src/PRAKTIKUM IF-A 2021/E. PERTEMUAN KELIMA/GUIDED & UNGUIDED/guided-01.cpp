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

int main()
{

    initHead();
    insertDepan(2);
    tampilList();
    insertBelakang(3);
    tampilList();
    deleteDepan();
    tampilList();
    deleteBelakang();
    tampilList();
    cout << endl;

    return 0;
}

















