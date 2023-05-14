// ALIF ALPIAN SAHRUL MUHAROM
// S1-IF08-A
// 20102007

#include <iostream>
#include <windows.h>

using namespace std;

int jumlahSimpul = 5;
string *dataSimpul;
int **dataBusur;
bool cekMatrik = false;
int indeksPosisi, simpulSaatIni, simpulAsal, simpulTujuan, jarakSaatIni, jarakLama, jarakBaru;
int dikunjungi = 1;
int belumDikunjungi = 0;
int *jarakDiketahui;
int *kunjungan;

void buatMatriks()
{
	dataSimpul = new string[jumlahSimpul];
	dataBusur = new int *[jumlahSimpul];
	dataBusur[0] = new int[jumlahSimpul * jumlahSimpul];
	for (int i = 1; i < jumlahSimpul; i++)
	{
		dataBusur[i] = dataBusur[i - 1] + jumlahSimpul;
	}
	cout << "Silahkan masukkan nama simpul " << endl;
	for (int i = 0; i < jumlahSimpul; i++)
	{
		cout << "Kota " << i + 1 << " : ";
		cin >> dataSimpul[i];
	}
	cout << endl;
	cout << "Silahkan masukkan bobot antar simpul " << endl;
	for (int baris = 0; baris < jumlahSimpul; baris++)
	{
		for (int kolom = 0; kolom < jumlahSimpul; kolom++)
		{
			cout << dataSimpul[baris] << " --> " << dataSimpul[kolom] << " : ";
			cin >> dataBusur[baris][kolom];
		}
	}
	cout << endl;
	cekMatrik = true;
}

void hitungJarakTerdekat()
{
	if (cekMatrik)
	{
		jarakDiketahui = new int[jumlahSimpul];
		kunjungan = new int[jumlahSimpul];
		for (int i = 0; i < jumlahSimpul; i++)
		{
			jarakDiketahui[i] = 999;
			kunjungan[i] = belumDikunjungi;
		}
		kunjungan[simpulAsal] = dikunjungi;
		jarakDiketahui[simpulAsal] = 0;
		simpulSaatIni = simpulAsal;
		while (simpulSaatIni != simpulTujuan)
		{
			jarakLama = 999;
			jarakSaatIni = jarakDiketahui[simpulSaatIni];
			for (int i = 0; i < jumlahSimpul; i++)
			{
				if (kunjungan[i] == belumDikunjungi)
				{
					jarakBaru = jarakSaatIni + dataBusur[simpulSaatIni][i];
					if (jarakBaru < jarakDiketahui[i])
					{
						jarakDiketahui[i] = jarakBaru;
					}
					if (jarakDiketahui[i] < jarakLama)
					{
						jarakLama = jarakDiketahui[i];
						indeksPosisi = i;
					}
				}
			}
			simpulSaatIni = indeksPosisi;
			kunjungan[simpulSaatIni] = dikunjungi;
		}
		cout << endl;
		cout << "Jarak terdekat dari " << simpulAsal << " ke " << simpulTujuan << " adalah " << jarakDiketahui[simpulTujuan] << endl;
		delete jarakDiketahui;
		delete kunjungan;
	}
}

void tampilMatriks()
{
	if (cekMatrik)
	{
		for (int i = 0; i < jumlahSimpul; i++)
		{
			cout << dataSimpul[i] << " ";
		}
		cout << endl;
		for (int baris = 0; baris < jumlahSimpul; baris++)
		{
			for (int kolom = 0; kolom < jumlahSimpul; kolom++)
			{
				cout << dataBusur[baris][kolom] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Tidak ada matriks" << endl;
	}
}

int main()
{
	char keluar;
	int pilih, menu;
	do
	{

		system("cls");
		cout << "------------------------" << endl;
		cout << "|      MENU GRAPH      |" << endl;
		cout << "------------------------" << endl;
		cout << "|1. Buat Matriks       |" << endl;
		cout << "|2. Tampil Matriks     |" << endl;
		cout << "|3. Jarak Tercepat     |" << endl;
		cout << "|4. Keluar             |" << endl;
		cout << "------------------------" << endl;
		cout << "Masukkan Pilihan : ";
		cin >> pilih;
		cout << endl;

		switch (pilih)
		{
		case 1:
			cout << "Silahkan masukkan jumlah kota (angka) : ";
			cin >> jumlahSimpul;
			buatMatriks();
			cout << endl;
			break;
		case 2:
			tampilMatriks();
			cout << endl;
			break;
		case 3:
			cout << "Silahkan masukkan simpul asal (0 - " << jumlahSimpul - 1 << ") : ";
			cin >> simpulAsal;
			cout << "Silahkan masukkan simpul tujuan (0 - " << jumlahSimpul - 1 << ") : ";
			cin >> simpulTujuan;
			hitungJarakTerdekat();
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "----PROGRAM BERAKHIR----" << endl;
			cout << endl;
			break;
		default:
			cout << endl;
			cout << "-----PAGE NOT FOUND-----" << endl;
			cout << endl;
			break;
		}
		system("pause");
	} while (pilih != 4);
	return 0;
}
