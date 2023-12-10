#include <iostream>

using namespace std;

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    cout << "Masukkan bilangan integer = ";
    cin >> N;

    int found = 0;
    for (int i = 0; i < 11; i++) {
        cout << A[i] << " ";
    }

    cout << "";
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            found = 1;
            cout << "\n\nADA";
            cout << "\nLokasi bilangan yang sama: ";
            for (int j = 0; j < 11; j++) {
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

