#include <iostream>
#include <string>

using namespace std;

int main(){
    system("cls");

    // Deklarasi
    string Kalimat, tambah;
    int index;

    // Memasukkan pada kalimat
    cout << "Masukkan Sebuah Kalimat" << endl; 
    getline(cin, Kalimat);
    cout << "Hasil : " << Kalimat << endl << endl;

    // Menampilkan tiap index
    for (int  i = 0; i < Kalimat.length(); i++){
        cout << "index ke-" << i << " : " << Kalimat[i] << endl;
    }
    cout << endl;

    // Mengubah huruf berdasarjkan index
    cout << "Mengganti huruf pada index" << endl;
    cout << "Masukkan Nomor index : ";
    cin >> index;
    cout << "Masukkan Huruf yang diganti : ";
    cin >> Kalimat[index];
    cout << "Hasil : " << Kalimat << endl << endl;

    system("pause");
    system("cls");
    
    cin.get();
    // Menyambung Kalimat
    cout << "Kalimat : " << Kalimat << endl << endl;
    cout << "Masukkan Kalimat yang ingin ditambah : ";
    getline(cin, tambah);
    Kalimat.append(tambah);
    cout << "Hasil : " << Kalimat;
    
    cin.get();
    return 0;
}