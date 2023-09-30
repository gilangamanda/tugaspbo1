#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int angka = 5;
    double nilai = 7.5;
    string nama = "Contoh";
    
    // Percabangan if
    if (angka > 0) {
        cout << "Angka positif" << endl;
    } else {
        cout << "Angka negatif atau nol" << endl;
    }
    
    // Perulangan for
    for (int i = 1; i <= 5; i++) {
        cout << "Iterasi ke-" << i << endl;
    }
    
    // Array satu dimensi
    int arrSatuDimensi[5] = {1, 2, 3, 4, 5};
    
    // Array multidimensi
    int arrDuaDimensi[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Input dan output
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Anda memasukkan angka " << angka << endl;
    
    return 0;
}
