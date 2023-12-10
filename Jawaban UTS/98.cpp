#include <iostream>

using namespace std;

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char N;

    cout << "Masukkan huruf = ";
    cin >> N;

    int found = 0;

    cout << "Array saat ini:\n";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    cout << "\n\n";
    for (int i = 0; i < 10; i++) {
        if (A[i] == N) {
            found = 1;
            cout << "\n\nADA";
            cout << "\nLokasi huruf yang sama: ";
            for (int j = 0; j < 10; j++) {
                if (A[j] == N) {
                    cout << j << " ";
                }
            }
            cout << "\n";
            break; 
        }
    }

    if (!found) {
        cout << "TIDAK ADA\n";
    }

    return 0;
}

