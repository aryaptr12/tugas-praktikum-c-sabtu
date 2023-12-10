#include <iostream>

using namespace std;

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    cout << "Masukkan bilangan integer = ";
    cin >> N;

    int found = 0;
    int locations[11]; // Simpan lokasi dalam array (maksimal 11, sesuai dengan ukuran array A)
    int count = 0; // Jumlah lokasi bilangan yang sama

    cout << "";
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            found = 1;
            locations[count++] = i;
        }
    }

    if (found) {
        cout << "ADA\n";
        cout << "Lokasi bilangan yang sama: ";
        for (int i = 0; i < count; i++) {
            cout << locations[i];
            if (i < count - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    } else {
        cout << "TIDAK ADA\n";
    }

    return 0;
}

