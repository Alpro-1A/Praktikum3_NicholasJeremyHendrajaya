#include <iostream>

using namespace std;

int main()
{
   int nilai;
   // INPUT NILAI DENGAN VARIABEL BEBAS
   cout << "Masukkan Nilai:";cin>>nilai;

   // OUTPUT NILAI SETELAH DI INPUT
   if (nilai >= 90) {
    cout << "Selamat! Anda mendapatkan nilai A" << endl; // Jika 90 atau lebih
   } else if (nilai >= 80) {
    cout << "Anda mendapatkan nilai B" << endl; // Untuk range 80-89
   } else if (nilai >= 70 ) {
    cout << "Anda mendapatkan nilai C" << endl; // Untuk range 70-79
   } else if (nilai >=  60) {
    cout << "Anda mendapatkan nilai D" << endl; // Untuk range 60-69
   } else if (nilai < 60 ) {
    cout << "Anda mendapatkan nilai E" << endl; // Jika dibawah 60
   }
    return 0;
}
