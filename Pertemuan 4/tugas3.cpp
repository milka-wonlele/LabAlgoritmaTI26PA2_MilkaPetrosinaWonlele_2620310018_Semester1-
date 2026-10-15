#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    double nilai1, nilai2, nilai3, rataRata;
    string hadiah;

    cout << "Program Hitung Nilai Rata-Rata\n\n";
    
    cout << "Nama Siswa ";
    getline(cin, nama);
    
    cout << "Nilai Pertandingan I: ";
    cin >> nilai1;
    
    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;
    
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    rataRata = (nilai1 + nilai2 + nilai3) / 3.0;

    if (rataRata >= 85) {
        hadiah = "Komputer Core i5";
    } else if (rataRata >= 70) {
        hadiah = "Uang sebesar Rp. 2.500.000";
    } else {
        hadiah = "Hadiah Hiburan";
    }

    cout << "\nSiswa yang bernama" << nama << "\n";
    cout << "Memperoleh nilai rata-rata" << (int)rataRata << "dari hasil perlombaan yang diikutinya" "\n" "Hadiah yang didapat adalah" << hadiah << "\n";

    return 0;
}