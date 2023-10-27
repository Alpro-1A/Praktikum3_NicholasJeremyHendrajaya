#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    cout << "[PROGRAM MENGHITUNG LUAS PERSEGI, PERSEGI PANJANG, DAN SEGITIGA] \n\n";

    // Bagian deskripsi untuk memilih mana yang akan di hitung
    cout << "Silakan pilih mana yang ingin dihitung lalu masukkan nomornya: " << endl;
    cout << "(1) Luas Persegi" << endl;
    cout << "(2) Luas Persegi Panjang" << endl;
    cout << "(3) Luas Segitiga\n\n";

    cout << "Masukkan nomor pilihan untuk menghitung luas: "; cin >> pilihan; // Bagian untuk input ingin menghitung yang mana

     switch (pilihan) {

        // Jika dipilih luas persegi
        case 1: {
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            double luas = sisi * sisi;
            cout << "Luas Persegi: " << luas << endl;
            break;
        }

        // Jika dipilih luas persegi panjang
        case 2: {
            double panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            double luas = panjang * lebar;
            cout << "Luas Persegi Panjang: " << luas << endl;
            break;
        }

        // Jika dipilih luas segitiga
        case 3: {
            double alas, tinggi;
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            double luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga: " << luas << endl;
            break;
        }

        default:
            cout << "Maaf, pilihan anda tidak valid, silakan pilih angka diantara 1, 2 atau 3. Terima Kasih!" << endl;
            // Jika pengguna input nomor yang tidak ada
     }
            return 0;
}

// CATATAN: Mengapa memakai tipe data double bukan float? Karena double menyimpan angka desimal dengan presisi ganda dibandingkan dengan float
