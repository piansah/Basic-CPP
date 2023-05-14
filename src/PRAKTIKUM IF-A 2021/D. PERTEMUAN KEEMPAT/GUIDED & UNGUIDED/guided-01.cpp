#include <iostream>

using namespace std;

struct buah
{
    string warna;
    int berat;
} jeruk;

int main()
{
    cout << "Masukkan warna jeruk: ";
    cin >> jeruk.warna;
    cout << "Masukkan berat jeruk: ";
    cin >> jeruk.berat;
    cout << endl;

    cout << "Warna jeruk: " << jeruk.warna << endl;
    cout << "Berat jeruk: " << jeruk.berat << endl;

    buah semangka;
    semangka.warna = "merah";
    semangka.berat = 4;

    cout << endl;
    cout << "Warna semangka: " << semangka.warna << endl;
    cout << "Berat semangka: " << semangka.berat << endl;

    return 0;
}





