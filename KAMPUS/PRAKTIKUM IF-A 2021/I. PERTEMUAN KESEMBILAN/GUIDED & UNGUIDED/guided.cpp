#include <iostream>

using namespace std;

struct dlinkedlist
{
    dlinkedlist *prev;
    string data;
    dlinkedlist *next;
};

dlinkedlist *head;
dlinkedlist *tail;
dlinkedlist *vertex;

void init()
{
    head = NULL;
    tail = NULL;
}

bool isEmpty()
{
    if (head == NULL && tail == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void insertDepan(string dataBaru)
{
    if (isEmpty() == true)
    {
        vertex = new dlinkedlist;
        vertex->data = dataBaru;
        head = vertex;
        tail = vertex;
        head->prev = tail;
        tail->next = head;
    }
    else
    {
        vertex = new dlinkedlist;
        vertex->data = dataBaru;
        vertex->next = head;
        head->prev = vertex;
        head = vertex;
        head->prev = tail;
        tail->next = head;
    }
}

void insertBelakang(string dataBaru)
{
    if (isEmpty() == true)
    {
        vertex = new dlinkedlist;
        vertex->data = dataBaru;
        head = vertex;
        tail = vertex;
        head->prev = tail;
        tail->next = head;
    }
    else
    {
        vertex = new dlinkedlist;
        vertex->data = dataBaru;
        vertex->prev = tail;
        tail->next = vertex;
        tail = vertex;
        tail->next = head;
        head->prev = tail;
    }
}

void deleteDepan()
{
    if (isEmpty() == true)
    {
        cout << "Kosong!!!" << endl;
    }
    else
    {
        dlinkedlist *helper;
        helper = head;
        if (head = tail)
        {
            tail->next = NULL;
            head->prev = NULL;
            head = NULL;
            tail = NULL;
            delete helper;
        }
        else
        {
            head = head->next;
            head->prev = tail;
            tail->next = head;
            helper->next = NULL;
            delete helper;
        }
    }
}

void deleteBelakang()
{
    if (isEmpty() == true)
    {
        cout << "Kosong!!!" << endl;
    }
    else
    {
        if (head = tail)
        {
            dlinkedlist *helper;
            helper = head;
            head->prev = NULL;
            tail->next = NULL;
            head = NULL;
            tail = NULL;
            delete helper;
        }
        else
        {
            dlinkedlist *helper;
            helper = tail;
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
            helper->prev = NULL;
            helper->next = NULL;
            delete helper;
        }
    }
}

void tampil()
{
    if (isEmpty() == true)
    {
        cout << "Kosong!!!" << endl;
    }
    else
    {
        dlinkedlist *helper;
        helper = head;
        do
        {
            cout << helper->data << " ";
            helper = helper->next;
        } while (helper != head);
    }
}

int main()
{
    init();

    insertDepan("Bandung");
    insertDepan("Aceh");
    insertBelakang("Ciamis");
    deleteDepan();
    deleteBelakang();
    deleteBelakang();
    tampil();

    return 0;
}