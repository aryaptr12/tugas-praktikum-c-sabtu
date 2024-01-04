#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    cout << "Selamat datang dalam Permainan Kartu Joker!" << endl;
    cout << "Tekan Enter untuk memulai...";


    cin.get();

 
    int kartuA = rand() % 10 + 1;
    int kartuB = rand() % 10 + 1;

    cout << "\nKartu A: ****\nKartu B: ****\n";


    int nilaiKalah = rand() % 20 + 1;

    cout << "\nAnda kalah jika total nilai kartu lebih dari " << nilaiKalah << "!" << endl;

 
    char pilihan;
    cout << "Pilih kartu A atau B: ";
    cin >> pilihan;

    if (pilihan == 'A' || pilihan == 'a') {
        cout << "\nKartu A: " << kartuA << endl;
    } else if (pilihan == 'B' || pilihan == 'b') {
        cout << "\nKartu B: " << kartuB << endl;
    } else {
        cout << "\nPilihan tidak valid. Keluar dari permainan." << endl;
        return 1;  // Keluar dengan kode kesalahan
    }


    int totalNilai = (pilihan == 'A' || pilihan == 'a') ? kartuA : kartuB;


    if (totalNilai < nilaiKalah) {
        cout << "\nSelamat! Anda menang! Total nilai kartu: " << totalNilai << endl;
    } else {
        cout << "\nMaaf, Anda kalah. Total nilai kartu: " << totalNilai << endl;
    }

    return 0;
}

