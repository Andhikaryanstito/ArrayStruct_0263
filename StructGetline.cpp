#include <iostream>
using namespace std;

// Definisi struct untuk alamat
struct Alamat {
    string desa;
    string kota;
};

// Definisi struct untuk mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    Alamat alamat;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cin.ignore(); // Menghindari newline agar getline bisa dipakai
    cout << "Masukkan NAMA = ";
    getline(cin, mhs.nama);
    cout << "Masukkan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota = ";
    cin >> mhs.alamat.kota;

    // Menampilkan data struct
    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Desa = " << mhs.alamat.desa << endl;
    cout << "Kota = " << mhs.alamat.kota << endl;

    return 0;
}
