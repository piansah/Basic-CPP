#include <iostream>
#include <string.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int mengulang () {

    int select;
    system ("cls");
    /*
    cout << endl;
    cout << "            TUGAS BESAR ALGORITMA DAN PEMROGRAMAN          " << endl;
    cout << "                  KELOMPOK 10 S1 IF08-A                    " << endl;
    cout << endl;
    cout << " NAMA             : ALIF ALPIAN SAHRUL MUHAROM  (20102007) " << endl;
    cout << " NAMA             : ALYSSA DIVA RISANA FAUZIYAH (20102012) " << endl;
    cout << " NAMA             : MUHAMAD RAFLI               (20102031) " << endl;
    cout << " DOSEN PENGAMPU   : AGUS PRIYANTO, S.Kom.,M.Kom            " << endl;
    cout << endl;
    cout << "                   FAKULTAS INFORMATIKA                    " << endl;
    cout << "      INSTITUT TEKNOLOGI TELKOM PUREWOKERTO 2020/2021      " << endl;
    */
    cout << endl;
    cout << " TUGAS BESAR ALGORITMA DAN PEMROGRAMAN                     " << endl;
    cout << " KELOMPOK 10 S1 IF08-A                                     " << endl;
    cout << endl;
    cout << " NAMA             : ALIF ALPIAN SAHRUL MUHAROM  (20102007) " << endl;
    cout << " NAMA             : ALYSSA DIVA RISANA FAUZIYAH (20102012) " << endl;
    cout << " NAMA             : MUHAMAD RAFLI               (20102031) " << endl;
    cout << " DOSEN PENGAMPU   : AGUS PRIYANTO, S.Kom.,M.Kom            " << endl;
    cout << endl;
    cout << " FAKULTAS INFORMATIKA                                      " << endl;
    cout << " INSTITUT TEKNOLOGI TELKOM PUREWOKERTO 2020/2021           " << endl;

    cout << endl << endl << endl;
    cout << " ======================================================================================" << endl;
    cout << " :::::::::::::::::::::::: >> PROGRAM PEMESANAN TIKET KERETA << ::::::::::::::::::::::::" << endl;
    cout << "                               TELKOM PWT RAILWAY STATION                              " << endl;
    cout << "                        INSTITUTE OF TECHNOLOGY TELKOM PURWOKERTO                      " << endl;
    cout << " ======================================================================================" << endl;
    cout << endl;
    cout << "   -------------------------------------" << endl;
    cout << "   |             MENU LIST             |" << endl;
    cout << "   -------------------------------------" << endl;
    cout << "   | 1. Stasiun Pemberangkatan         |" << endl;
    cout << "   | 2. Stasiun Tujuan                 |" << endl;
    cout << "   | 3. Waktu Pemberangkatan           |" << endl;
    cout << "   | 4. Jumlah Penumpang               |" << endl;
    cout << "   | 5. Tiket                          |" << endl;
    cout << "   | 6. Data Diri                      |" << endl;
    cout << "   | 7. Metode Pembayaran              |" << endl;
    cout << "   | 8. Displays                       |" << endl;
    cout << "   | 9. Finish                         |" << endl;
    cout << "   -------------------------------------" << endl;
    cout << "   Pilih menu : ";
    cin >> select;
    return select;
}
int main() {
    int pilihan = mengulang();

    int pemesan, penumpang, bayi, total_dewasa, total_semua;
    int i, x, bayar, gerai,  minimarket, HargaTiket, metode, kembalian;
    int stasiun, purpose, kelas, eksekutif, mataram, bima, ranggajati, sribilah, gajahwong, kertajaya, bisnis, ekonomi;
    int waktu, tanggal, tanggal_pemesan, tanggal_bayi, tahun_berangkat, tanggal_berangkat, tahun_penumpang, tahun_pemesan, tahun_bayi;

    char lanjut;

    string stasiunAsal, stasiunTujuan, berangkat_pagi, berangkat_sore, bulan_berangkat;
    string nama_pemesan, lahir_pemesan, ktp_pemesan, alamat_pemesan, telepon_pemesan, email_pemesan;
    string nama_penumpang, lahir_penumpang, ktp_penumpang, alamat_penumpang, telepon_penumpang,email_penumpang;
    string nama_bayi, lahir_bayi;

    enum option {FIRST = 1, LAST, TIME, PASSENGER, TYPE, DATA, METHOD, DISPLAYS, FINISH};

    while (pilihan != FINISH){
        switch(pilihan) {
//PILIHAN PERTAMA
            case FIRST:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << "                           STASIUN PEMBERANGKATAN                                      " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " 1.  Stasiun Bandung    || 2.  Stasiun Karawang   || 3.  Stasiun Purwakarta            " << endl;
                cout << " 4.  Stasiun Banten     || 5.  Stasiun Madiun     || 6.  Stasiun Semarang              " << endl;
                cout << " 7.  Stasiun Bogor      || 8.  Stasiun Magelang   || 9.  Stasiun Surabaya              " << endl;
                cout << " 10. Stasiun Cianjur    || 11. Stasiun Mojokerto  || 12. Stasiun Tasikmalaya           " << endl;
                cout << " 13. Stasiun Cirebon    || 14. Stasiun Pemalang   || 15. Stasiun Tegal                 " << endl;
                cout << " 16. Stasiun Jakarta    || 17. Stasiun Purwakarta || 18. Stasiun Yogyakarta            " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " Pilih stasiun pemberangkatan anda : ";
                cin >> stasiun;
                cout << " --------------------------------------------------------------------------------------" << endl;

                switch(stasiun){
                    case 1:
                        cout << " Anda memilih Stasiun Bandung " << endl;
                        stasiunAsal = " Stasiun Bandung ";
                        break;
                    case 2:
                        cout << " Anda memilih Stasiun Karawang " << endl;
                        stasiunAsal = " Stasiun Karawang ";
                        break;
                    case 3:
                        cout << " Anda memilih Stasiun Purwakarta " << endl;
                        stasiunAsal = " Stasiun Purwakarta ";
                        break;
                    case 4:
                        cout << " Anda memilih Stasiun Banten " << endl;
                        stasiunAsal = " Stasiun  Banten ";
                        break;
                    case 5:
                        cout << " Anda memilih Stasiun Madiun " << endl;
                        stasiunAsal = " Stasiun Madiun ";
                        break;
                    case 6:
                        cout << " Anda memilih Stasiun Semarang" << endl;
                        stasiunAsal = " Stasiun Semarang ";
                        break;
                    case 7:
                        cout << " Anda memilih Stasiun Bogor " << endl;
                        stasiunAsal = " Stasiun Bogor ";
                        break;
                    case 8:
                        cout << " Anda memilih Stasiun Magelang " << endl;
                        stasiunAsal = " Stasiun Magelang ";
                        break;
                    case 9:
                        cout << " Anda memilih Stasiun Surabaya " << endl;
                        stasiunAsal = "station Surabaya ";
                        break;
                    case 10:
                        cout << " Anda memilih Stasiun Cianjur " << endl;
                        stasiunAsal = " Stasiun Cianjur ";
                        break;
                    case 11:
                        cout << " Anda memilih Stasiun  Mojokerto " << endl;
                        stasiunAsal = " Stasiun Mojokerto ";
                        break;
                    case 12:
                        cout << " Anda memilih Stasiun Tasikmalaya " << endl;
                        stasiunAsal = " Stasiun Tasikmalaya ";
                        break;
                    case 13:
                        cout << " Anda memilih Stasiun Cirebon " << endl;
                        stasiunAsal = "station Cirebon ";
                        break;
                    case 14:
                        cout << " Anda memilih Stasiun Pemalang " << endl;
                        stasiunAsal = "station Pemalang ";
                        break;
                    case 15:
                        cout << " Anda memilih Stasiun Tegal " << endl;
                        stasiunAsal = " Stasiun Tegal ";
                        break;
                    case 16:
                        cout << " Anda memilih Stasiun Jakarta " << endl;
                        stasiunAsal = "station Jakarta ";
                        break;
                    case 17:
                        cout << " Anda memilih Stasiun Purwakarta " << endl;
                        stasiunAsal = "station Purwakarta ";
                        break;
                    case 18:
                        cout << " Anda memilih Stasiun Yogyakarta " << endl;
                        stasiunAsal = " Stasiun Yogyakarta ";
                        break;
                    default:
                        cout << " Stasiun tidak ditemukan" << endl;
                }
                break;
//PILIHAN KEDUA
            case LAST:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << "                               STASIUN TUJUAN                                          " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " 1.  Stasiun Bandung    || 2.  Stasiun Karawang   || 3.  Stasiun Purwakarta            " << endl;
                cout << " 4.  Stasiun Banten     || 5.  Stasiun Madiun     || 6.  Stasiun Semarang              " << endl;
                cout << " 7.  Stasiun Bogor      || 8.  Stasiun Magelang   || 9.  Stasiun Surabaya              " << endl;
                cout << " 10. Stasiun Cianjur    || 11. Stasiun Mojokerto  || 12. Stasiun Tasikmalaya           " << endl;
                cout << " 13. Stasiun Cirebon    || 14. Stasiun Pemalang   || 15. Stasiun Tegal                 " << endl;
                cout << " 16. Stasiun Jakarta    || 17. Stasiun Purwakarta || 18. Stasiun Yogyakarta            " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " Pilih stasiun tujuan anda : ";
                cin >> purpose;
                cout << " --------------------------------------------------------------------------------------" << endl;

                switch(purpose){
                    case 1:
                        cout << " Anda memilih Stasiun Bandung " << endl;
                        stasiunTujuan = " Stasiun Bandung ";
                        break;
                    case 2:
                        cout << " Anda memilih Stasiun Karawang " << endl;
                        stasiunTujuan = " Stasiun Karawang ";
                        break;
                    case 3:
                        cout << " Anda memilih Stasiun Purwakarta " << endl;
                        stasiunTujuan = " Stasiun Purwakarta ";
                        break;
                    case 4:
                        cout << " Anda memilih Stasiun Banten " << endl;
                        stasiunTujuan = " Stasiun  Banten ";
                        break;
                    case 5:
                        cout << " Anda memilih Stasiun Madiun " << endl;
                        stasiunTujuan = " Stasiun Madiun ";
                        break;
                    case 6:
                        cout << " Anda memilih Stasiun Semarang" << endl;
                        stasiunTujuan = " Stasiun Semarang ";
                        break;
                    case 7:
                        cout << " Anda memilih Stasiun Bogor " << endl;
                        stasiunTujuan = " Stasiun Bogor ";
                        break;
                    case 8:
                        cout << " Anda memilih Stasiun Magelang " << endl;
                        stasiunTujuan = " Stasiun Magelang ";
                        break;
                    case 9:
                        cout << " Anda memilih Stasiun Surabaya " << endl;
                        stasiunTujuan = "station Surabaya ";
                        break;
                    case 10:
                        cout << " Anda memilih Stasiun Cianjur " << endl;
                        stasiunTujuan = " Stasiun Cianjur ";
                        break;
                    case 11:
                        cout << " Anda memilih Stasiun  Mojokerto " << endl;
                        stasiunTujuan = " Stasiun Mojokerto ";
                        break;
                    case 12:
                        cout << " Anda memilih Stasiun Tasikmalaya " << endl;
                        stasiunTujuan = " Stasiun Tasikmalaya ";
                        break;
                    case 13:
                        cout << " Anda memilih Stasiun Cirebon " << endl;
                        stasiunTujuan = "station Cirebon ";
                        break;
                    case 14:
                        cout << " Anda memilih Stasiun Pemalang " << endl;
                        stasiunTujuan = "station Pemalang ";
                        break;
                    case 15:
                        cout << " Anda memilih Stasiun Tegal " << endl;
                        stasiunTujuan = " Stasiun Tegal ";
                        break;
                    case 16:
                        cout << " Anda memilih Stasiun Jakarta " << endl;
                        stasiunTujuan = "station Jakarta ";
                        break;
                    case 17:
                        cout << " Anda memilih Stasiun Purwakarta " << endl;
                        stasiunTujuan = "station Purwakarta ";
                        break;
                    case 18:
                        cout << " Anda memilih Stasiun Yogyakarta " << endl;
                        stasiunTujuan = " Stasiun Yogyakarta ";
                        break;
                    default:
                        cout << " Stasiun tidak ditemukan" << endl;
                }
                break;
//PILIHAN KETIGA
            case TIME:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " WAKTU PEMBERANGKATAN                                                                  " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << "   Tanggal : ";
                cin >> tanggal_berangkat;
                cout << "   Bulan   : ";
                cin >> bulan_berangkat;
                cout << "   Tahun   : ";
                cin >> tahun_berangkat;
                cout << " ......................................................................................" << endl;
                cout << " BERANGKAT PAGI ATAU SORE                                                              " << endl;
                cout << " ......................................................................................" << endl;
                cout << "   1. Pemberangkatan Pagi pada pukul 08.30 WIB " << endl;
                cout << "   2. Pemberangkatan Sore pada pukul 15.00 WIB " << endl;
                cout << endl;
                cout << " Tentukan ingin berangkat pagi atau sore : ";
                cin >> waktu;
                cout << endl;
                    switch (waktu) {
                    case 1:
                        cout << " Pemberangkatan Pagi pada pukul 08.30 WIB " << endl;
                        berangkat_pagi = " \t   Pemberangkatan Pagi Pada pukul 08.30 WIB";
                        break;
                    case 2:
                        cout << " Pemberangkatan Sore pada pukul 15.00 WIB " << endl;
                        berangkat_sore = " \t   Pemberangkatan Sore Pada pukul 15.00 WIB ";
                        break;
                    }
                break;
//PILIHAN KEEMPAT
            case PASSENGER:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " JUMLAH PENUMPANG                                                                      " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                pemesan = 1;
                cout << "    Pemesan          : ";
                cout << pemesan << endl;
                cout << "    Penumpang        : ";
                cin >> penumpang;
                cout << "    Bayi(<3 Tahun)   : ";
                cin >> bayi;
                cout << endl;

                    total_dewasa = pemesan + penumpang;
                    total_semua = pemesan + penumpang + bayi;

                cout << " " << total_dewasa << " Dewasa dan " << bayi << " Infant" << endl;
                cout << " Jumlah tiket yang dibeli " << total_semua << " tiket " << endl;
                break;
//PILIHAN KELIMA
            case TYPE:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " KELAS KERETA                                                                          " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << "   1. Eksekutif " << endl;
                cout << "   2. Bisnis " << endl;
                cout << "   3. Ekonomi " << endl;
                cout << endl;
                cout << " Pilih Kelas Kereta: ";
                cin >> kelas;
                cout << endl;
                    switch(kelas) {
                        case 1:
                            cout << " \t KELAS EKSEKUTIF " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 1. MATARAM(M)      " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 210.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKSEKUTIF(S)                                                       TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 2. BIMA(B)         " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 250.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKSEKUTIF(S)                                                       TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 3. GAJAYANA(G)     " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 255.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKSEKUTIF(S)                                                       TIDAK TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << " \t Pilih Kereta : ";
                            cin >> eksekutif;
                            cout << endl;

                                switch (eksekutif) {
                                case 1 :
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 1. MATARAM(M)      " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 210.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    EKSEKUTIF(S)                                                       TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    mataram = 210000;
                                    break;
                                case 2 :
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 2. BIMA(B)         " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 250.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    EKSEKUTIF(S)                                                       TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    bima = 250000;
                                    break;
                                default :
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " Pilihan Tidak Tersedia " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    break;
                                }
                            break;
                        case 2:
                            cout << " \t KELAS BISNIS " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 1. RANGGAJATI(120B) " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 150.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    BISNIS (A)                                                         TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 2. CIREMAI(20B)    " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 165.000" << endl;
                            cout << " \t\t\t\t  " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    BISNIS(A)                                                          TIDAK TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 3. SRIBILLAH(11)    " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 195.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    BISNIS(A)                                                          TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " \t Pilih Kereta : ";
                            cin >> bisnis;
                            cout << endl;

                                switch (bisnis) {
                                case 1 :
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 1. RANGGAJATI(120B) " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 150.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    BISNIS(A)                                                          TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    ranggajati = 150000;
                                    break;
                                case 2 :
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " Pilihan Tidak Tersedia " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    break;
                                case 3 :
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 3. SRIBILAH(11)    " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 195.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    BISNIS(A)                                                          TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    sribilah = 195000;
                                    break;
                                }
                            break;
                        case 3:
                            cout << " \t KELAS EKONOMI " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 1. TEGAL ARUM(22)  " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 110.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKONOMI (B)                                                        TIDAK TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 2. GAJAHWONG(96)   " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 95.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKONOMI(B)                                                         TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " 3. KERTAJAYA(11)   " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 70.000" << endl;
                            cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                            cout << "    EKONOMI(B)                                                         TERSEDIA  " << endl;
                            cout << " --------------------------------------------------------------------------------------" << endl;
                            cout << " \t Pilih Kereta : ";
                            cin >> ekonomi;
                            cout << endl;

                                switch (ekonomi) {
                                case 1 :
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " Pilihan Tidak Tersedia" << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    break;
                                case 2 :
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 2. GAJAHWONG(96)   " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 95.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    EKONOMI (B)                                                        TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    gajahwong = 95000;
                                    break;
                                case 3 :
                                    cout << endl;
                                    cout << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << endl;
                                    cout << " \t Anda Memilih Kereta                                                                " << endl;
                                    cout << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    cout << " 3. KERTAJAYA(11)    " << stasiunAsal << "    >>>    " << stasiunTujuan << "    Rp. 70.000" << endl;
                                    cout << " \t\t\t\t   " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                                    cout << "    EKONOMI (B)                                                        TERSEDIA  " << endl;
                                    cout << " --------------------------------------------------------------------------------------" << endl;
                                    kertajaya = 70000;
                                    break;
                                    }
                                break;
                        default:
                            cout << " Kelas Tidak Ditemukan" << endl;
                            break;
                    }
                break;
//PILIHAN KEENAM
             case DATA:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " DATA DIRI                                                                            " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " Jumlah penumpang : " << total_semua << endl;
                cout << " " << total_dewasa << " Dewasa dan " << bayi << " Infant " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                        cout << " DATA DIRI PEMESAN " <<  endl;

                        getline (cin, nama_pemesan);
                        cout << "   Nama Pemesan       : ";
                        getline (cin, nama_pemesan);
                        cout << "   Tanggal Lahir      : ";
                        getline (cin, lahir_pemesan);
                        cout << "   Nomor KTP          : ";
                        getline (cin, ktp_pemesan);
                        cout << "   Alamat Rumah       : ";
                        getline (cin, alamat_pemesan);
                        cout << "   Nomor Telepon      : ";
                        getline (cin, telepon_pemesan);
                        cout << "   Email              : ";
                        getline (cin, email_pemesan);
                        cout << " ......................................................................................" << endl;

                        for (i=0; i<penumpang; i++){
                        cout << " DATA DIRI PENUMPANG " << i+1 <<  endl;
                        cout << "   Nama Penumpang     : ";
                        getline (cin, nama_penumpang);
                        cout << "   Tanggal Lahir      : ";
                        getline (cin, lahir_penumpang);
                        cout << "   Nomor KTP          : ";
                        getline (cin, ktp_penumpang);
                        cout << "   Alamat Rumah       : ";
                        getline (cin, alamat_penumpang);
                        cout << "   Nomor Telepon      : ";
                        getline (cin, telepon_penumpang);
                        cout << "   Email              : ";
                        getline (cin, email_penumpang);
                       cout << " ......................................................................................" << endl;
                        }
                        for (x=0; x<bayi; x++) {
                        cout << endl;
                        cout << " DATA DIRI BAYI " << x+1 <<  endl;
                        cout << "   Nama Bayi          : ";
                        getline (cin, nama_bayi);
                        cout << "   Tanggal Lahir Bayi : ";
                        getline (cin, lahir_bayi);
                        cout << " ......................................................................................" << endl;
                        }
//PILIHAN KETUJUH
                break;
            case METHOD:
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << " METODE PEMBAYARAN                                                                     " << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << "   1. Pembayaran Transfer ATM " << endl;
                cout << "   2. Pembayaran Di Mini Market " << endl;
                cout << endl;
                cout << " Pilih Metode Pembayaran : ";
                cin >> metode;
                cout << endl;
                    switch(metode) {
                        case 1 :
                            cout << " Pembayaran Tranfer ATM " << endl;
                            cout << endl;
                            if (eksekutif==1){
                                HargaTiket = total_semua*210000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " MANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK     : 346789098760" << endl;
                                cout << " BRI NO REK     : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << "Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else if (eksekutif==2){
                                HargaTiket = total_semua*250000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " MANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK     : 346789098760" << endl;
                                cout << " BRI NO REK     : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else if (bisnis==1){
                                HargaTiket = total_semua*150000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " MANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK     : 346789098760" << endl;
                                cout << " BRI NO REK     : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << "Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else if (bisnis==3){
                                HargaTiket = total_semua*195000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " MANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK     : 346789098760" << endl;
                                cout << " BRI NO REK     : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else if (ekonomi==2){
                                HargaTiket = total_semua*70000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " \tMANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK       : 346789098760" << endl;
                                cout << " BRI NO REK       : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else if (ekonomi==3){
                                HargaTiket = total_semua*95000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Anda Harus Mentransfer Ke Rekening Di Bawah ini" << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " MANDIRI NO REK : 578820086772" << endl;
                                cout << " BNI NO REK     : 346789098760" << endl;
                                cout << " BRI NO REK     : 987654345456" << endl;
                                cout << endl;
                                cout << " Atas Nama PT. Telkom Trains  " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " Dibayar : Rp. ";
                                cin >> bayar;
                            }
                            else{
                            cout << "Tidak Tersedia";
                            }
                            break;
                        case 2 :
                            cout << " Pembayaran Melalui Minimarket " << endl;
                            cout << endl;

                            if (eksekutif==1){
                                HargaTiket = total_semua*210000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 20021997000086 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else if (eksekutif==2){
                                HargaTiket = total_semua*250000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 2AGB029DA70C08 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else if (bisnis==1){
                                HargaTiket = total_semua*150000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 2AGB029DA70C08 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else if (bisnis==3){
                                HargaTiket = total_semua*195000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 2AGB029DA70C08 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else if (ekonomi==2){
                                HargaTiket = total_semua*70000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " \t Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 2AGB029DA70C08 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else if (ekonomi==3){
                                HargaTiket = total_semua*95000;
                                cout << " \n Jumlah yang harus di bayar adalah Rp " << HargaTiket << endl;
                                cout << " ======================================================================================" << endl;
                                cout << " Pembayaran Melalui Minimarket " << endl;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                cout << " 1. Alfamart 008  " << endl;
                                cout << " 2. Indomaret 016 " << endl;
                                cout << " 3. 212 Mart 212  " << endl;
                                cout << endl;
                                cout << " Pilih Pembayaran Melalui Minimarket : ";
                                cin >> gerai;
                                cout << " --------------------------------------------------------------------------------------" << endl;
                                    switch(gerai) {
                                    case 1:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Alfamart 008  : 2AGB029DA70C08 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 2:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " Indomaret 016 : 077016" << telepon_pemesan << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    case 3:
                                        cout << " Kode Pembayaran Gerai Mini Market" << endl;
                                        cout << endl;
                                        cout << " 212 Mart 212  : 21200011198212 " << endl;
                                        cout << " Dibayar : Rp. ";
                                        cin >> bayar;
                                        break;
                                    default:
                                        cout << " Pilihan tidak ditemukan " << endl;
                                        break;
                                    }
                            }
                            else{
                            cout << " Tiket tidak Tersedia " << endl;
                            }
                            break;
                       }
               break;
//PILIHAN KEDELAPAN
            case DISPLAYS:
                cout << endl;
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << endl;
                cout << endl;
                cout << " \t ====================================================================" << endl;
                cout << " \t                      TELKOM PWT RAILWAY STATION                     " << endl;
                cout << " \t ====================================================================" << endl;
                cout << " \t   Nama           : " << nama_pemesan << endl;
                cout << " \t   Nomor KTP      : " << ktp_pemesan << endl;
                cout << " \t   Alamat Email   : " << email_pemesan << endl;
                cout << endl;
                cout << " \t\t Di Bayar Rp. " << HargaTiket << endl;
                cout << " \t\t " << tanggal_berangkat << " " << bulan_berangkat << " " << tahun_berangkat << endl;
                cout << endl;
                     if (eksekutif==1){
                            cout << " \t\t MATARAM (M)" << endl;
                            cout << " \t\t EKSEKUTIF (S) " << endl;
                     }
                     else if (eksekutif==2){
                            cout << " \t\t BIMA (B)" << endl;
                            cout << " \t\t EKSEKUTIF (S)" << endl;
                     }
                     else if (bisnis==1){
                            cout << " \t\t RANGGAJATI (120B) " << endl;
                            cout << " \t\t BISNIS (A)" << endl;
                     }
                     else if (bisnis==3){
                            cout << " \t\t SRIBILLAH (11)" << endl;
                            cout << " \t\t BISNIS (A)" << endl;
                     }
                     else if (ekonomi==2){
                            cout << " \t\t GAJAHWONG " << endl;
                            cout << " \t\t EKONOMI (B)" << endl;
                     }
                     else if (ekonomi==3){
                            cout << " \t\t KERTAJAYA (121) " << endl;
                            cout << " \t\t EKONOMI (B)" << endl;
                     }
                cout << endl;
                cout << " \t  " << stasiunAsal << "     >>>     " << stasiunTujuan << endl;
                    if (waktu == 1){
                        cout << berangkat_pagi << endl;
                    }else {
                        cout << berangkat_sore << endl;
                    }
                cout << " \t   " << total_dewasa << " Dewasa dan " << bayi << " Infant" << endl;
                cout << endl;
                cout << " \t ====================================================================" << endl;
                break;
            default:
                cout << " --------------------------------------------------------------------------------------" << endl;
                cout << endl;
                cout << " ::::::::::::::::::::::::::::::: Pilihan Tidak Ditemukan ::::::::::::::::::::::::::::::" << endl;
               break;
        }
        cout << endl;
        cout << " ======================================================================================" << endl;
        cout << " Lanjutkan? (y/n) : ";
        cin >> lanjut;
        cout << endl;
        if ((lanjut == 'y') || (lanjut == 'Y')) {
              pilihan = mengulang();
        }else if ((lanjut == 'n') || (lanjut == 'N')) {
            break;
        }
    }
    cout << endl;
    cout << " ::::::::::::::::::::::::::::: >> SEMOGA SAMPAI TUJUAN << :::::::::::::::::::::::::::::" << endl;
    cout << "                                  --- TERIMA KASIH ---                                 " << endl;
    cout << " ======================================================================================" << endl;

    cin.get();
return 0;
}
