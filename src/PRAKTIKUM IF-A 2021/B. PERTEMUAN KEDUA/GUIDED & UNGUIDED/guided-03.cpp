#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int angka[2][3][2] = {{{1, 2}, {2, 3}, {3, 4}},
                          {{4, 5}, {5, 6}, {6, 7}}};
    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << "." << endl;
        for (int j = 0; j < 3; j++){
            for(int k=0; k<2; k++){
                cout << angka[1][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
