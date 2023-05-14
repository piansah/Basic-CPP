#include <iostream>

using namespace std;

int main()
{
    //pointer
    // * &
    int a, *b;
    a = 20;
    b = &a;

    cout << " alamat pointer b yaitu : " << b << endl;
    cout << " alamatnya berisi nilai : " << *b << endl;
    return 0;
}
