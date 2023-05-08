#include <iostream>

using namespace std;

int jumlahKarakter(char *kata)
{
    int jumlah = 0;

    for (int i = 0; kata[i] != '\0'; i++)
    {
        jumlah++;
    }

    return jumlah;
}

int main()
{
    char katakata[100];
    cout << "Masukkan Kata: ";
    cin.getline(katakata, 100);
    cout << "Jumlah Karakternya: " << jumlahKarakter(katakata);
    cout << endl;

    return 0;
}











