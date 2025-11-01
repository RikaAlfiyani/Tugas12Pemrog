#include <iostream>
using namespace std;

// Struktur data pasien
struct Pasien {
    string nama;
    string penyakit;
    string alamat;
    double biaya;
};

int main() {
    int jumlah;
    double totalBiaya = 0;

    cout << "=== PROGRAM DATA PASIEN RUMAH SAKIT ===\n";
    cout << "Masukkan jumlah pasien: ";
    cin >> jumlah;
    cin.ignore();

    Pasien data[jumlah]; // Membuat array dari struct

    // Input data pasien
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData pasien ke-" << i + 1 << ":\n";
        cout << "Nama pasien: ";
        getline(cin, data[i].nama);
        cout << "Jenis penyakit: ";
        getline(cin, data[i].penyakit);
        cout << "Alamat pasien: ";
        getline(cin, data[i].alamat);
        cout << "Biaya perawatan: Rp ";
        cin >> data[i].biaya;
        cin.ignore();

        totalBiaya += data[i].biaya;
    }

    // Tampilkan data pasien
    cout << "\n=== DAFTAR PASIEN ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nPasien ke-" << i + 1 << ":\n";
        cout << "Nama       : " << data[i].nama << endl;
        cout << "Penyakit   : " << data[i].penyakit << endl;
        cout << "Alamat     : " << data[i].alamat << endl;
        cout << "Biaya (Rp) : " << data[i].biaya << endl;
    }

    // Total biaya seluruh pasien
    cout << "\nTotal biaya seluruh pasien: Rp " << totalBiaya << endl;

    return 0;
}