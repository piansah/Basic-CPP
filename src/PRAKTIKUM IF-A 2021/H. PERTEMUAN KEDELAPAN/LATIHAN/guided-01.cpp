#include <iostream>

using namespace std;

struct TNode
{
    int data;
    TNode *next;
    TNode *prev;
};
TNode *head, *baru, *hapus, *bantu, *bantu2;

void init()
{
    head = NULL;
}

int isEmpty()
{
    if (head == NULL)
        return 1;
    else
        return 0;
}

void insertDepan(int value)
{
    baru = new TNode;

    baru->data = value;
    baru->next = NULL;
    baru->prev = NULL;

    if (isEmpty() == 1)
    {
        head = baru;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        baru->next = head;
        head->prev = baru;
        head = baru;
    }
    cout << "Data masuk" << endl;
}

void insertBelakang(int value)
{
    baru = new TNode;

    baru->data = value;
    baru->next = NULL;
    baru->prev = NULL;

    if (isEmpty() == 1)
    {
        head = baru;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        bantu = head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
        baru->prev = bantu;
    }
    cout << "Data masuk!" << endl;
}

void insertTengah(int value, int cari)
{
    baru = new TNode;

    baru->data = value;
    baru->next = NULL;
    baru->prev = NULL;
    bantu = head;

    while (bantu->data != cari)
    {
        bantu = bantu->next;
    }

    bantu2 = bantu->next;
    baru->next = bantu2;
    bantu2->prev = baru;
    bantu->next = baru;
    baru->prev = bantu;
}

void deleteDepan()
{
    if (isEmpty() == 0)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            head->prev = NULL;
            delete hapus;
        }
        else
        {
            head = NULL;
        }
        cout << "Data terhapus" << endl;
    }
    else
    {
        cout << "Data kosong" << endl;
    }
}

void deleteBelakang()
{
    if (isEmpty() == 0)
    {
        if (head->next != NULL)
        {
            hapus = head;
            while (hapus->next != NULL)
            {
                hapus = hapus->next;
            }
            hapus->prev->next = NULL;
            delete hapus;
        }
        else
        {
            head = NULL;
        }
        cout << "Data terhapus!" << endl;
    }
    else
    {
        cout << "Data kosong!" << endl;
    }
}

void deleteTengah(int cari)
{

    hapus = head;
    while (hapus->data != cari)
    {
        hapus = hapus->next;
    }
    bantu2 = hapus->next;
    bantu = hapus->prev;
    bantu->next = bantu2;
    bantu2->prev = bantu;
    delete hapus;
    cout << "Data terhapus" << endl;
}

void clear()
{
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
}

void cetak()
{
    bantu = head;

    if (isEmpty() == 0)
    {
        while (bantu != NULL)
        {
            cout << bantu->data;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Data kosong " << endl;
    }
}

int main()
{
    init();
    cout << "== Insert Depan ==" << endl;
    insertDepan(3);
    cout << "== Insert Depan ==" << endl;
    insertDepan(4);
    cout << "== Insert Tengah ==" << endl;
    insertTengah(6, 4);
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Insert Belakang ==" << endl;
    insertBelakang(8);
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Delete Depan ==" << endl;
    deleteDepan();
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Insert Depan ==" << endl;
    insertDepan(7);
    cout << "== Delete Tengah ==" << endl;
    deleteTengah(6);
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Delete Belakang ==" << endl;
    deleteBelakang();
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Hapus List ==" << endl;
    clear();

    return 0;
}