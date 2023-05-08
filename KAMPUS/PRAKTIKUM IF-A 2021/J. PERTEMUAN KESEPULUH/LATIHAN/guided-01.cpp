#include <iostream>

using namespace std;

int main()
{
    int baris;
    int kolom;

    cout << "Masukkan jumlah baris : ";
    cin >> baris;
    cout << "Masukkan kolom        : ";
    cin >> kolom;
    cout << endl;

    int matrix_A[baris][kolom];
    int matrix_B[baris][kolom];
    int tambah[baris][kolom];
    int kurang[baris][kolom];

    //menginputkan matrix
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan matrix pertama [" << i << "][" << j << "] : ";
            cin >> matrix_A[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan matrix kedua [" << i << "][" << j << "] : ";
            cin >> matrix_B[i][j];
        }
    }

    //menampilkan matrix
    cout << endl;
    cout << "Matrix pertama : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matrix_A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matrix kedua : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matrix_B[i][j] << " ";
        }
        cout << endl;
    }

    //menjumlahkan matrix
    cout << endl;
    cout << "Hasil penjumlahan matrixs : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            tambah[i][j] = matrix_A[i][j] + matrix_B[i][j];
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }

    //mengurangkan matrix
    cout << endl;
    cout << "Hasil pengurangan matrixs : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            kurang[i][j] = matrix_A[i][j] - matrix_B[i][j];
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

