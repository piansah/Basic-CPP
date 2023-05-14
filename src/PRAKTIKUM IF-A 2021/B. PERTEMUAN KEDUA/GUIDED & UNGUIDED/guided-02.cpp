#include <iostream>

using namespace std;

int main()
{
    float matrix_A[2][3], det_A, adj_A[2][2], inverse_A[2][2];

    //menginputkan matriks
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Masukkan angka matrix [" << i << "][" << j << "] : ";
            cin >> matrix_A[i][j];
        }
    }

    //determinan matrix
    //A = (ad - bc)
    det_A = (matrix_A[0][0] * matrix_A[1][1] - matrix_A[0][1] * matrix_A[1][0]);

    //adjoint matrix
    /* A = | d -b|
           |-c a | */

    //menukarkan a dengan d
    adj_A[0][0] = matrix_A[1][1];
    adj_A[1][1] = matrix_A[0][0];

    //mengalikan b dan c dengan -1
    adj_A[0][1] = matrix_A[0][1] * -1;
    adj_A[1][0] = matrix_A[1][0] * -1;

    //inverse matrix
    //A = (1/det_A) * adj_A
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            inverse_A[i][j] = (1 / det_A) * adj_A[i][j];
        }
    }

    cout << endl;

    //menampilkan matrix
    //matrix A
    cout << " Matrix A : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix_A[i][j] << " ";
        }
        cout << endl;
    }
    //determinan matrix A
    cout << "Determinan Matrix A : " << det_A << endl;
    cout << endl;

    //adjoint matrix A
    cout << "Adjoint Matrix A : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << adj_A[i][j] << " ";
        }
        cout << endl;
    }
    // inverse matrix A
    cout << "Inverse Matrix A : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << inverse_A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
