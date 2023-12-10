#include <iostream>

using namespace std;

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    cout << "Masukkan bilangan integer = ";
    cin >> N;

    int found = 0;

    cout << "";
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            found = 1;
             for (int i = 0; i < 11; i++) {
        cout << A[i] << " ";}
            cout << "\nADA";
            break; 
        }
    }

    if (found) {
        cout << "\nLokasi bilangan yang sama: ";
        for (int i = 0; i < 11; i++) {
            if (A[i] == N) {
                cout << i << " ";
            }
        }
        cout << "\n";
    } else {
        cout << "TIDAK ADA\n";
    }

    return 0;
}

