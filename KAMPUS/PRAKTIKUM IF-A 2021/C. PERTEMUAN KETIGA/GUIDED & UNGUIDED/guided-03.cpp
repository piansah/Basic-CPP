#include <iostream>

using namespace std;

int main()
{
    int value1 = 5, value2 = 15;
    int *mypointer;

    mypointer = &value1;
    *mypointer = 10;

    mypointer = &value2;
    *mypointer = 20;

    cout << "Nilai value1 : " << value1 << endl;
    cout << "Nilai value2 : " << value2 << endl;

    return 0;
}














