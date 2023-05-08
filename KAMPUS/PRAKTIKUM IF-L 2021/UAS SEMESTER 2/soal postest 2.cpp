// Alif Alpian Sahrul Muharom
// S1-IF08-A
// 20102007

#include <iostream>
#include <windows.h>
using namespace std;
struct pohon
{
    pohon *kanan;
    char data;
    pohon *kiri;
};
pohon *simpul;
pohon *root;
pohon *saatIni;
pohon *helperA;
pohon *helperB;
pohon *alamat[256];
void insialisasi()
{
    root = NULL;
}
void simpulBaru(char dataMasukkan)
{
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}
void simpulAkar()
{
    if (root == NULL)
    {
        char dataAnda;
        cout << "Silahkan masukkan data : ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    }
    else
    {
        cout << "Root sudah ada..." << endl;
    }
}
void tambahSimpul()
{
    char pilihan;
    if (root != NULL)
    {
        int i, j, penanda;
        char dataUser;
        i = 1;
        j = 1;
        penanda = 0;
        alamat[i] = root;
        while (penanda == 0 && j < 12)
        {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0')
            {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            }
            else
            {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0)
            {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0')
                {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                }
                else
                {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            cout << "Tambah simpul : (y/t)" << endl;
            cin >> pilihan;
            if (pilihan == 'y')
            {
                i++;
            }
            else
                break;
        }
    }
}
void bacaPohon()
{
    if (root != NULL)
    {
        int i, n, pencacah;
        i = 1;
        n = 1;
        pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL)
        {
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
            if (pencacah == n)
            {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
    cout << endl;
}
int main()
{
    int menu;
    do
    {
        system("cls");
        cout << "--------MENU TREE--------" << endl;
        cout << "|1. Tambah simpul akar  |" << endl;
        cout << "|2. Tambah simpul       |" << endl;
        cout << "|3. Lihat pohon         |" << endl;
        cout << "|4. Exit                |" << endl;
        cout << "-------------------------" << endl;
        cout << "Masukan Pilih  : ";
        cin >> menu;
        cout << endl;
        switch (menu)
        {
        case 1:
            simpulAkar();
            break;
        case 2:
            tambahSimpul();
            break;
        case 3:
            bacaPohon();
            break;
        case 4:
            cout << "----PROGRAM BERAKHIR----" << endl;
            cout << endl;
            break;
        default:
            cout << "-----PAGE NOT FOUND-----" << endl;
            cout << endl;
            break;
        }
        system("pause");
    } while (menu != 5);
    return 0;
}