//NAMA  : ALIF ALPIAN SAHRUL MUHAROM
//NIM   : 20102007
//KELAS : S1-IF08-A

#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

struct node
{
  node *prev;
  string nama;
  string nim;
  node *next;
};
node *head;
node *tail;
node *vertex;
node *hapus, *bantu, *bantu2;

void init()
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

void insertDepan(string nama, int nim)
{
  if (isEmpty() == 1)
  {
    vertex = new node;
    cout << "Masukkan Data Mahasiswa : " << endl;
    cout << "Nama : ";
    cin >> vertex->nama;
    cout << "NIM  : ";
    cin >> vertex->nim;
    vertex->prev = NULL;
    vertex->next = NULL;
    head = vertex;
    tail = vertex;
  }
  else
  {
    vertex = new node;
    cout << "Masukkan Data Mahasiswa : " << endl;
    cout << "Nama : ";
    cin >> vertex->nama;
    cout << "NIM  : ";
    cin >> vertex->nim;

    vertex->prev = NULL;
    vertex->next = NULL;
    vertex->next = head;
    head->prev = vertex;
    head = vertex;
  }
  cout << endl;
  cout << "Data masuk!" << endl;
  cout << endl;
}

void insertBelakang(string nama, int nim)
{
  vertex = new node;
  vertex->prev = NULL;
  vertex->next = NULL;
  cout << "Masukkan Data Mahasiswa : " << endl;
  cout << "Nama : ";
  cin >> vertex->nama;
  cout << "NIM  : ";
  cin >> vertex->nim;
  if (isEmpty() == 1)
  {
    head = vertex;
    tail = vertex;
  }
  else
  {
    tail->next = vertex;
    vertex->prev = tail;
    tail = vertex;
  }
  cout << endl;
  cout << "Data masuk!" << endl;
  cout << endl;
}

void insertTengah(string nama, int nim, int posisi)
{
  node *bantu, *bantu2;
  vertex = new node;
  cout << "Masukkan Data Mahasiswa : " << endl;
  cout << "Nama : ";
  cin >> vertex->nama;
  cout << "NIM  : ";
  cin >> vertex->nim;

  vertex->next = NULL;
  vertex->prev = NULL;

  bantu = head;
  int nomor = 1;
  while (nomor < posisi - 1)
  {
    bantu = bantu->next;
    nomor++;
  }
  bantu2 = bantu->next;
  vertex->next = bantu2;
  bantu2->prev = vertex;
  bantu->next = vertex;
  vertex->prev = bantu;
  cout << endl;
  cout << "Data masuk!" << endl;
  cout << endl;
}

void deleteDepan()
{
  if (isEmpty() == 1)
  {
    cout << "Data Kosong!" << endl;
    cout << endl;
  }
  else
  {
    node *bantu;
    bantu = head;
    if (head == tail)
    {
      head = NULL;
      tail = NULL;
      delete bantu;
    }
    else
    {
      head = head->next;
      head->prev = NULL;
      bantu->next = NULL;
      delete bantu;
    }
    cout << "Data terhapus!" << endl;
    cout << endl;
  }
}

void deleteBelakang()
{
  if (isEmpty() == 1)
  {
    cout << "Data Kosong!" << endl;
    cout << endl;
  }
  else
  {
    if (head == tail)
    {
      node *bantu;
      bantu = head;
      head = NULL;
      tail = NULL;
      delete bantu;
    }
    else
    {
      node *bantu;
      bantu = tail;
      tail = tail->prev;
      tail->next = NULL;
      bantu->prev = NULL;
      delete bantu;
    }
    cout << "Data terhapus!" << endl;
    cout << endl;
  }
}

void deleteTengah(int posisi)
{
  if (isEmpty() == 1)
  {
    cout << "Data Kosong!" << endl;
    cout << endl;
  }
  else
  {
    node *bantu, *bantu1, *bantu2;

    int nomor = 1;
    bantu = head;

    while (nomor < posisi - 1)
    {
      bantu = bantu->next;
      nomor++;
    }

    bantu2 = bantu->next;
    bantu1 = bantu2->next;
    bantu->next = bantu1;
    bantu1->prev = bantu;
    delete bantu2;
    cout << "Data terhapus!" << endl;
    cout << endl;
  }
}

void clear()
{
  node *bantu, *hapus;
  bantu = head;
  while (bantu != NULL)
  {
    hapus = bantu;
    bantu = bantu->next;
    delete hapus;
  }
  head = NULL;
  cout << "Data terhapus!" << endl;
  cout << endl;
}

void cetak()
{
  if (isEmpty() == 1)
  {
    cout << "Data Kosong!" << endl;
  }
  else
  {
    node *bantu;
    bantu = head;
    while (bantu != NULL)
    {
      cout << " Nama Mahasiswa : " << bantu->nama << " " << endl;
      cout << " NIM  Mahasiswa : " << bantu->nim << " " << endl;
      bantu = bantu->next;
      cout << endl;
    }
  }
}

int main()
{
  int menu;
  string nama;
  int nim;
  init();
  do
  {
    system("cls");

    cout << "----------------------------" << endl;
    cout << "|  PROGRAM DARA MAHASISWA  |" << endl;
    cout << "|--------------------------|" << endl;
    cout << "| 1. Insert Depan          |" << endl;
    cout << "| 2. Insert Belakang       |" << endl;
    cout << "| 3. Insert Tengah         |" << endl;
    cout << "| 4. Delete Depan          |" << endl;
    cout << "| 5. Delete Belakang       |" << endl;
    cout << "| 6. Delete Tengah         |" << endl;
    cout << "| 7. Tampilkan             |" << endl;
    cout << "| 8. Clear                 |" << endl;
    cout << "| 9. Exit                  |" << endl;
    cout << "----------------------------" << endl;
    cout << " Pilihan Anda : ";
    cin >> menu;
    cout << endl;

    switch (menu)
    {
    case 1:
      insertDepan(nama, nim);
      break;
    case 2:
      insertBelakang(nama, nim);
      break;
    case 3:
      int cari;
      cout << "data akan ditempatkan di posisi : ";
      cin >> cari;
      insertTengah(nama, nim, cari);
      break;
    case 4:
      deleteDepan();
      break;
    case 5:
      deleteBelakang();
      break;
    case 6:
      int caricari;
      cout << "Menghapus Data ke : ";
      cin >> caricari;
      deleteTengah(caricari);
      break;
    case 7:
      cetak();
      break;
    case 8:
      clear();
      break;
    case 9:
      cout << "----------END GAME----------" << endl;
      cout << endl;
      break;
    default:
      cout << "-------PAGE NOT FOUND-------" << endl;
      cout << endl;
      break;
    }
    system("pause");
  } while (menu != 9);
  return 0;
}
