//NIM : 20102007
//Nama : ALIF ALPIAN SAHRUL MUHAROM
//Kelas : S1-IF08-A

#include <iostream>
#include <windows.h>

using namespace std;

// 01 prosedur operasi penjumlahan
void penjumlahan(double arr[], double size)
{
    //variabel array yang digunakan
    double x[10];
    double y[10];
    double hasil[1];
    cout << "OPERASI PENJUMLAHAN" << endl;
    cout << endl;
    //array untuk menampung bilangan pertama
    cout << "Masukkan bilangan pertama : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> x[i];
    }
    //array untuk menampung bilangan kedua
    cout << "Masukkan bilangan kedua   : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> y[i];
    }
    //bilangan yang telah dimasukkan akan dihitung di sini
    for (int i = 0; i < 1; i++)
    {
        hasil[i] = x[i] + y[i];
        cout << endl;
        cout << " " << x[i] << " + " << y[i] << " = " << hasil[i];
        cout << endl;
    }
}

// 02 prosedur operasi perkalian
void perkalian(double arr[], double size)
{
    //variabel array yang digunakan
    double x[10];
    double y[10];
    double hasil[1];
    cout << "OPERASI PERKALIAN" << endl;
    cout << endl;
    //array untuk menampung bilangan pertama
    cout << "Masukkan bilangan pertama : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> x[i];
    }
    //array untuk menampung bilangan kedua
    cout << "Masukkan bilangan kedua   : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> y[i];
    }
    //bilangan yang telah dimasukkan akan dihitung di sini
    for (int i = 0; i < 1; i++)
    {
        hasil[i] = x[i] * y[i];
        cout << endl;
        cout << " " << x[i] << " x " << y[i] << " = " << hasil[i];
        cout << endl;
    }
}

// 03 prosedur operasi pembagian
void pembagian(double arr[], double size)
{
    //variabel array yang digunakan
    double x[10];
    double y[10];
    double hasil[1];
    cout << "OPERASI PEMBAGIAN" << endl;
    cout << endl;
    //array untuk menampung bilangan pertama
    cout << "Masukkan bilangan pertama : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> x[i];
    }
    //array untuk menampung bilangan kedua
    cout << "Masukkan bilangan kedua   : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> y[i];
    }
    //bilangan yang telah dimasukkan akan dihitung di sini
    for (int i = 0; i < 1; i++)
    {
        hasil[i] = x[i] / y[i];
        cout << endl;
        cout << " " << x[i] << " / " << y[i] << " = " << hasil[i];
        cout << endl;
    }
}
// 04 prosedur operasi pengurangan
void pengurangan(double arr[], double size)
{
    //variabel array yang digunakan
    double x[10];
    double y[10];
    double hasil[1];
    //memasukkan data
    cout << "OPERASI PENGURANGAN" << endl;
    cout << endl;
    //array untuk menampung bilangan pertama
    cout << "Masukkan bilangan pertama : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> x[i];
    }
    //array untuk menampung bilangan kedua
    cout << "Masukkan bilangan kedua   : ";
    for (int i = 0; i < 1; i++)
    {
        cin >> y[i];
    }
    //bilangan yang telah dimasukkan akan dihitung di sini
    for (int i = 0; i < 1; i++)
    {
        hasil[i] = x[i] - y[i];
        cout << endl;
        cout << " " << x[i] << " - " << y[i] << " = " << hasil[i];
        cout << endl;
    }
}
//menu oprasi kalkulator
int Mengulang()
{
    int input;
    system("cls");
    cout << "-----------------------------" << endl;
    cout << "          KALKULATOR         " << endl;
    cout << "-----------------------------" << endl;
    cout << "  1. Penjumlahan             " << endl;
    cout << "  2. Perkalian               " << endl;
    cout << "  3. Pembagian               " << endl;
    cout << "  4. Pengurangan             " << endl;
    cout << "  5. Selesai                 " << endl;
    cout << "-----------------------------" << endl;
    cout << " Masukkan pilihan : ";
    cin >> input;
    cout << endl;
    return input;
}
//badan main. Prosedur akan dipanggil di sini
int main()
{
    int pilihan = Mengulang();
    double operasi[2];
    char lanjut;
    //agar program mudah dibaca (pengganti konstanta dari menu)
    enum pilihan
    {
        PENJUMLAHAN = 1,
        PERKALIAN,
        PEMBAGIAN,
        PENGURANGAN,
        FINISH
    };
    //perulangan dari menu oprasi kalkulator
    while (pilihan != FINISH)
    {
        //menggunakan percabangan untuk memilih menu
        switch (pilihan)
        {
        case PENJUMLAHAN:
            //pemanggilan prosedur penjumlahan
            penjumlahan(operasi, 2);
            break;
        case PERKALIAN:
            //pemanggilan prosedur perkalian
            perkalian(operasi, 2);
            break;
        case PEMBAGIAN:
            //pemanggilan prosedur pembagian
            pembagian(operasi, 2);
            break;
        case PENGURANGAN:
            //pemanggilan prosedur pengurangan
            pengurangan(operasi, 2);
            break;
        /* jika ternyata tidak ada nilai yang sesuai
        maka blok default yang akan di eksekusi */
        default:
            cout << "404 Page not found" << endl;
            break;
        }
        /* program tidak akan berhenti sebelum
        users mengkentikan sendiri (y/n)*/
        cout << endl;
        cout << "Lanjutkan? (y/n) : ";
        cin >> lanjut;
        cout << endl;
        /* percabangan yang menyatakan ya atau tidak untuk
        melanjutkan jika memilih y maka program akan mengulang */
        if ((lanjut == 'y') || (lanjut == 'Y'))
        {
            pilihan = Mengulang();
        }
        //jika memilih n maka program akan menghentikan proses
        else if ((lanjut == 'n') || (lanjut == 'N'))
        {
            break;
        }
    }
    cout << " Akhir dari Program" << endl;
    cout << " ---Terima kasih---" << endl;

    cin.get();
    return 0;
}