#include <iostream>

using namespace std;

void hurufBesar(char *kata)
{
    for (int i = 0; kata[i] != '\0'; i++)
    {
        kata[i] = toupper(kata[i]);
    }
}

int main()
{
    char katakata[100];
    cout << "Masukkan Kata : ";
    cin.getline(katakata, 100);
    hurufBesar(katakata);
    cout << katakata;
    cout << endl;

    return 0;
}


















