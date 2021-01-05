#include <iostream>
#include <string>
using namespace std;

struct waktu {
    int jam,menit,detik;
};
struct identitas {
    string nama,nim,prodi;
};

void data_diri(identitas addres[]) {
    cout << endl;
    cout << "Nama   : Putra Nugraha" << endl;
    cout << "Nim    : C2057201103" << endl;
    cout << "Prodi  : Sistem Informasi" << endl;
    cout << "------------------------------" << endl;
}

void tambah (waktu konversi_jam[]) {
    cout << "Masukan Jam   : "; cin >> konversi_jam->jam;
    cout << "Masukan Menit : "; cin >> konversi_jam->menit;
    cout << "Masukan Detik : "; cin >> konversi_jam->detik;
    
}
void tampil (waktu konversi_jam[],int hour,int minute,int konversi) {
    konversi = konversi_jam->jam * hour + konversi_jam->menit * minute + konversi_jam->detik;

    cout << konversi_jam->jam << " Jam " << konversi_jam->menit << " Menit " << konversi_jam->detik << " Detik " << endl;
    cout << "Jika dikonversi Kedetik adalah : " << konversi << endl;
}

int main () {
    int hour = 3600;
    int minute = 60;
    int konversi;
    bool ulang;
    char lagi;
    waktu konversi_jam[10];
    identitas addres[10];

    do{
        data_diri(addres);

    cout << "---------------------------" << endl;
    cout << "  Konversi Waktu ke Detik  " << endl;
    cout << "  -----------------------  " << endl;

    tambah(konversi_jam);

    cout << " ------------------------------" << endl;
    cout << "  Hasil Dari Konversi ke-Detik " << endl;
    cout << "-------------------------------" << endl;
    
    tampil (konversi_jam,hour,minute,konversi);
    cout << "------------------------------------" << endl;

    cout << "Ulangi Konversi Waktu ?y/n "; cin >> lagi;
    ulang = ((lagi == 'y') || (lagi == 'Y'));

    }while(ulang);
    cout << "\n Terimakasih \n";
    



}
