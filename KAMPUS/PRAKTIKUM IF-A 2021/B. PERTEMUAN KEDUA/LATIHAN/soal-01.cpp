//NIM : 20102007
//Nama : ALIF ALPIAN SAHRUL MUHAROM
//Kelas : S1-IF08-A

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

// 01 prosedur matrix ordo 3x3
void matrix_ordo(float arr[], float size)
{
    int matrix[3][3];

    cout << " MATRIX ORDO 3X3 " << endl;
    cout << endl;
    //menginputkan matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Masukkan matrix pertama [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }
    //menampilkan matrix
    cout << endl;
    cout << " Matrix ordo 3x3 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
// 02 prosedur perkalian matrix
void perkalian_matrix(float arr[], float size)
{
    int matrix_A[10][10];
    int matrix_B[10][10];
    int hasil[10][10];
    int baris_A, kolom_A, baris_B, kolom_B;
    int i, j, k, jumlah = 0;

    cout << " PERKALIAN MATRIX" << endl;
    cout << endl;
    //menginputkan matrix
    cout << " Masukkan jumlah baris matriks pertama : ";
    cin >> baris_A; //M
    cout << " Masukkan jumlah kolom matriks pertama : ";
    cin >> kolom_A; //N
    cout << endl;
    cout << " Masukkan jumlah baris matriks kedua   : ";
    cin >> baris_B; //P
    cout << " Masukkan jumlah kolom matriks kedua   : ";
    cin >> kolom_B; //Q
    cout << endl;
    // akan salah jika jumlah kolom dan baris matrix A berbeda dengan matrix B
    if (kolom_A != baris_B)
    {
        cout << "                   404 PAGE                  " << endl;
        cout << "            Your Smart Custom Page           " << endl;
        cout << " Matrix tidak dapat dikalikan satu sama lain " << endl;
    }
    // jika sama maka matrix dapat dikalikan
    else
    {
        //menginputkan matrix A
        for (i = 0; i < baris_A; i++)
        {
            for (j = 0; j < kolom_A; j++)
            {
                cout << "Masukkan matrix pertama [" << i << "][" << j << "] : ";
                cin >> matrix_A[i][j];
            }
        }
        //menginputkan matrix B
        cout << endl;
        for (i = 0; i < kolom_B; i++)
        {
            for (j = 0; j < baris_B; j++)
            {
                cout << " Masukkan matrix kedua  [" << i << "][" << j << "] : ";
                cin >> matrix_B[i][j];
            }
        }
        cout << endl;
        //menampilkan matrix
        cout << endl;
        cout << " Matrix pertama : " << endl;
        for (int i = 0; i < baris_A; i++)
        {
            for (int j = 0; j < kolom_A; j++)
            {
                cout << " " << matrix_A[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << " Matrix kedua : " << endl;
        for (int i = 0; i < baris_B; i++)
        {
            for (int j = 0; j < kolom_B; j++)
            {
                cout << " " << matrix_B[i][j] << " ";
            }
            cout << endl;
        }
        //rumus perkalian
        for (i = 0; i < baris_A; i++)
        {
            for (j = 0; j < kolom_B; j++)
            {
                for (k = 0; k < baris_B; k++)
                {
                    jumlah = jumlah + matrix_A[i][k] * matrix_B[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        //hasil perkalian matrix
        cout << endl;
        cout << " Hasil perkalian matrix : " << endl;
        for (i = 0; i < baris_A; i++)
        {
            for (j = 0; j < kolom_A; j++)
            {
                cout << " " << hasil[i][j] << " ";
            }
            cout << endl;
        }
    }
}
// 03 prosedur adjoin matrix
void adjoint_matrix(float arr[], float size)
{
    float matrix_A[3][3];
    float kofaktor[3][3];
    float adjoint[3][3];

    //menginputkan matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan matrix [" << i << "][" << j << "]: ";
            cin >> matrix_A[i][j];
        }
    }
    //menampilkan matrix
    cout << endl;
    cout << " Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << matrix_A[i][j] << "  ";
        }
        cout << endl;
    }

    kofaktor[0][0] = ((matrix_A[1][1] * matrix_A[2][2]) - (matrix_A[1][2] * matrix_A[2][1]));
    kofaktor[0][1] = ((matrix_A[1][0] * matrix_A[2][2]) - (matrix_A[1][2] * matrix_A[2][0])) * -1;
    kofaktor[0][2] = (matrix_A[1][0] * matrix_A[2][1]) - (matrix_A[1][1] * matrix_A[2][0]);
    kofaktor[1][0] = ((matrix_A[0][1] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[2][1])) * -1;
    kofaktor[1][1] = (matrix_A[0][0] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[2][0]);
    kofaktor[1][2] = ((matrix_A[0][0] * matrix_A[2][1]) - (matrix_A[0][1] * matrix_A[2][0])) * -1;
    kofaktor[2][0] = (matrix_A[0][1] * matrix_A[1][2]) - (matrix_A[0][2] * matrix_A[1][1]);
    kofaktor[2][1] = ((matrix_A[0][0] * matrix_A[1][2]) - (matrix_A[0][2] * matrix_A[1][0])) * -1;
    kofaktor[2][2] = (matrix_A[0][0] * matrix_A[1][1]) - (matrix_A[0][1] * matrix_A[1][0]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            adjoint[j][i] = kofaktor[i][j];
        }
        cout << endl;
    }
    cout << " Adjoint matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << adjoint[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
// 04 prosedur determinan matrix
void determinan_matrix(float arr[], float size)
{
    int matrix_A[3][3];
    float determinan;

    cout << " DETERMINAN MATRIX " << endl;
    cout << endl;
    //menginputkan matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Masukkan matrix [" << i << "][" << j << "] : ";
            cin >> matrix_A[i][j];
        }
    }
    cout << endl;
    //determinan matrix
    //A = (ad - bc)
    determinan = (matrix_A[0][0] * matrix_A[1][1] * matrix_A[2][2] +
                  matrix_A[0][1] * matrix_A[1][2] * matrix_A[2][0] +
                  matrix_A[0][2] * matrix_A[1][0] * matrix_A[2][1] -
                  matrix_A[0][2] * matrix_A[1][1] * matrix_A[2][0] -
                  matrix_A[0][0] * matrix_A[1][2] * matrix_A[2][1] -
                  matrix_A[0][1] * matrix_A[1][0] * matrix_A[2][2]);

    //menampilkan matrix
    //matrix A
    cout << " Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << matrix_A[i][j] << " ";
        }
        cout << endl;
    }
    //determinan matrix A
    cout << endl;
    cout << " Determinan Matrix  : " << determinan << endl;
}
// 05 prosedur inverse matrix
void inverse_matrix(float arr[], float size)
{
    int matrix_A[3][3];
    float adjoint[3][3];
    float kofaktor[3][3];
    float inverse[3][3];
    float determinan;

    cout << " INVERSE MATRIX " << endl;
    cout << endl;
    //menginputkan matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Masukkan matrix [" << i << "][" << j << "] : ";
            cin >> matrix_A[i][j];
        }
    }
    //determinan matrix
    //A = (ad - bc)
    determinan = (matrix_A[0][0] * matrix_A[1][1] * matrix_A[2][2] +
                  matrix_A[0][1] * matrix_A[1][2] * matrix_A[2][0] +
                  matrix_A[0][2] * matrix_A[1][0] * matrix_A[2][1] -
                  matrix_A[0][2] * matrix_A[1][1] * matrix_A[2][0] -
                  matrix_A[0][0] * matrix_A[1][2] * matrix_A[2][1] -
                  matrix_A[0][1] * matrix_A[1][0] * matrix_A[2][2]);

    //adjoint matrix
    kofaktor[0][0] = ((matrix_A[1][1] * matrix_A[2][2]) - (matrix_A[1][2] * matrix_A[2][1]));
    kofaktor[0][1] = ((matrix_A[1][0] * matrix_A[2][2]) - (matrix_A[1][2] * matrix_A[2][0])) * -1;
    kofaktor[0][2] = (matrix_A[1][0] * matrix_A[2][1]) - (matrix_A[1][1] * matrix_A[2][0]);
    kofaktor[1][0] = ((matrix_A[0][1] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[2][1])) * -1;
    kofaktor[1][1] = (matrix_A[0][0] * matrix_A[2][2]) - (matrix_A[0][2] * matrix_A[2][0]);
    kofaktor[1][2] = ((matrix_A[0][0] * matrix_A[2][1]) - (matrix_A[0][1] * matrix_A[2][0])) * -1;
    kofaktor[2][0] = (matrix_A[0][1] * matrix_A[1][2]) - (matrix_A[0][2] * matrix_A[1][1]);
    kofaktor[2][1] = ((matrix_A[0][0] * matrix_A[1][2]) - (matrix_A[0][2] * matrix_A[1][0])) * -1;
    kofaktor[2][2] = (matrix_A[0][0] * matrix_A[1][1]) - (matrix_A[0][1] * matrix_A[1][0]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            adjoint[j][i] = kofaktor[i][j];
        }
    }

    //inverse matrix
    //A = (1/det_A) * adj_A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            inverse[i][j] = (1 / determinan) * adjoint[i][j];
        }
    }
    //menampilkan matrix
    //matrix A
    cout << endl;
    cout << " Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << matrix_A[i][j] << " ";
        }
        cout << endl;
    }
    // inverse matrix A
    cout << endl;
    cout << " Inverse Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << inverse[i][j] << " ";
        }
        cout << endl;
    }
}
int pilihan;
int Mengulang()
{
    int input;
    system("cls");
    cout << "----------------------------" << endl;
    cout << "           MATRIX           " << endl;
    cout << "----------------------------" << endl;
    cout << " 1. Matrix Ordo 3x3         " << endl;
    cout << " 2. Perkalian Matrix        " << endl;
    cout << " 3. Adjoin Matrix           " << endl;
    cout << " 4. Determinan Matrix       " << endl;
    cout << " 5. Invers Matrix           " << endl;
    cout << "----------------------------" << endl;
    cout << " Masukkan pilihan : ";
    cin >> input;
    cout << endl;
    return input;
}
//badan main. Prosedur akan dipanggil di sini
int main()
{
    int pilihan = Mengulang();
    float matrix[3];
    char lanjut;
    //agar program mudah dibaca saya gunakan enum (pengganti konstanta dari menu)
    enum pilihan
    {
        MATRIX = 1,
        PERKALIAN,
        ADJOINT,
        DETERMINAN,
        INVERSE,
        FINISH
    };
    //perulangan dari menu matrix
    while (pilihan != FINISH)
    {
        //menggunakan percabangan untuk memilih menu
        switch (pilihan)
        {
        case MATRIX:
            //pemanggilan prosedur matrix ordo 3x3
            matrix_ordo(matrix, 3);
            break;
        case PERKALIAN:
            perkalian_matrix(matrix, 3);
            //pemanggilan prosedur perkalian matrix
            break;
        case ADJOINT:
            //pemanggilan prosedur adjoin matrix
            adjoint_matrix(matrix, 3);
            break;
        case DETERMINAN:
            //pemanggilan prosedur determinan matrix
            determinan_matrix(matrix, 3);
            break;
        case INVERSE:
            //pemanggilan prosedur inverse matrix
            inverse_matrix(matrix, 3);
            break;
        /* jika ternyata tidak ada nilai yang sesuai
        maka blok default yang akan di eksekusi */
        default:
            cout << " WHAT IS FILE NOT FOUND ERROR " << endl;
            cout << "     HOW TO FIX 404 ERROR     " << endl;
            break;
        }
        /* program tidak akan berhenti sebelum
        users mengkentikan sendiri (y/n)*/
        cout << endl;
        cout << " Lanjutkan? (y/n) : ";
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





