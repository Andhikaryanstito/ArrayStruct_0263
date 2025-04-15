#include <iostream>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
};

int main(){
    Mahasiswa mhs;

    mhs.nim = "20220140102";
    mhs.nama = "Abra Yudhistira";
    mhs.alamat = "Kasihan";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat = ";
    cin >> mhs.alamat;
    
    // Menampilkan data struct
    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat <<endl;

}