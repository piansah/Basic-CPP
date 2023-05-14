#include <iostream>

using namespace std;

struct dlinkedlist
{
    dlinkedlist *prev;
    int data;
    dlinkedlist *next;
};

dlinkedlist *head;
dlinkedlist *tail;
dlinkedlist *vertex;

void inisialisasi()
{
    head = NULL;
    tail = NULL;
}

int isEmpty()
{
    if (head == NULL && tail == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insertDepan(int dataUser)
{
    if (isEmpty() == 1)
    {
        vertex = new dlinkedlist;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        head = vertex;
        tail = vertex;
    }
    else
    {
        vertex = new dlinkedlist;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        vertex->next = head;
        head->prev = vertex;
        head = vertex;
    }
    cout << "Data masuk!" << endl;
}

void insertBelakang(int dataUser)
{
    if (isEmpty() == 1)
    {
        vertex = new dlinkedlist;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        head = vertex;
        tail = vertex;
    }
    else
    {
        vertex = new dlinkedlist;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        tail->next = vertex;
        vertex->prev = tail;
        tail = vertex;
    }
    cout << "Data masuk!" << endl;
}

void insertTengah(int dataUser, int cari)
{
    dlinkedlist *helper, *helper2;
    vertex = new dlinkedlist;
    vertex->data = dataUser;
    vertex->next = NULL;
    vertex->prev = NULL;
    helper = head;

    while (helper->data != cari)
    {
        helper = helper->next;
    }
    helper2 = helper->next;
    vertex->next = helper2;
    helper2->prev = vertex;
    helper->next = vertex;
    vertex->prev = helper;
    cout << "Data masuk!" << endl;
}

void deleteDepan()
{
    if (isEmpty() == 1)
    {
        cout << "Data Kosong!" << endl;
    }
    else
    {
        dlinkedlist *helper;
        helper = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete helper;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
            helper->next = NULL;
            delete helper;
        }
        cout << "Data terhapus!" << endl;
    }
}

void deleteBelakang()
{
    if (isEmpty() == 1)
    {
        cout << "Data Kosong!" << endl;
    }
    else
    {
        if (head == tail)
        {
            dlinkedlist *helper;
            helper = head;
            head = NULL;
            tail = NULL;
            delete helper;
        }
        else
        {
            dlinkedlist *helper;
            helper = tail;
            tail = tail->prev;
            tail->next = NULL;
            helper->prev = NULL;
            delete helper;
        }
        cout << "Data terhapus!" << endl;
    }
}

void deleteTengah(int cari)
{
    if (isEmpty() == 1)
    {
        cout << "Data Kosong!" << endl;
    }
    else
    {
        dlinkedlist *helper, *helper1, *helper2;
        helper = head;
        while (helper->data != cari)
        {
            helper = helper->next;
        }
        helper2 = helper->next;
        helper1 = helper->prev;
        helper1->next = helper2;
        helper2->prev = helper1;
        delete helper;
        cout << "Data terhapus!" << endl;
    }
}

void clear()
{
    dlinkedlist *helper, *hapus;
    helper = head;
    while (helper != NULL)
    {
        hapus = helper;
        helper = helper->next;
        delete hapus;
    }
    head = NULL;
}

void cetak()
{
    if (isEmpty() == 1)
    {
        cout << "Data Kosong!" << endl;
    }
    else
    {
        dlinkedlist *helper;
        helper = head;
        while (helper != NULL)
        {
            cout << helper->data << " ";
            helper = helper->next;
            cout << endl;
        }
    }
}

int main()
{
    inisialisasi();
    cout << "== Insert Depan ==" << endl;
    insertDepan(3);
    cout << "== Insert Depan ==" << endl;
    insertDepan(4);
    cout << "== Insert Tengah ==" << endl;
    insertTengah(6, 4);
    cout << "== Insert Belakang ==" << endl;
    insertBelakang(5);
    cout << "== Delete Depan ==" << endl;
    deleteDepan();
    cout << "== Insert Depan ==" << endl;
    insertDepan(7);
    cout << "== Delete Tengah ==" << endl;
    deleteTengah(6);
    cout << "== Delete Belakang ==" << endl;
    deleteBelakang();
    cout << "== Tampil List ==" << endl;
    cetak();
    cout << "== Hapus List ==" << endl;
    clear();

    return 0;
}