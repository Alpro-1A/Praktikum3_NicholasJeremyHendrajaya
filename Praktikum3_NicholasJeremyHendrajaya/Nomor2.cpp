#include <iostream>

using namespace std;

int main()
{

    int a,b,c;
    cout << "[ MENCARI ANGKA TERBESAR DI ANTARA TIGA ANGKA ]\n\n";

    // Meminta pengguna memasukan ketiga angka sesuka hati
    cout << "Masukkan Angka Pertama:";cin>>a;
    cout << "Masukkan Angka Kedua:";cin>>b;
    cout << "Masukkan Angka Ketiga:";cin>>c;

    // Hasil dari input tersebut
    cout << "Maka angka terbesar adalah: ";


    // Jika a terbesar
    if (a > b && a > c)
        cout << a << endl;

    // Jika b terbesar
    else if (b > a && b > c)
        cout << b << endl;

     // Jika c terbesar
    else if (c > b && c > a)
        cout << c << endl;



    return 0;
}
