#include <iostream>
using namespace std;

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12] = {0}; // Array B dengan nilai awal 0
    int C[12] = {0}; // Array C dengan nilai awal 0

    int sum = 0;
    double average;

    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    average = static_cast<double>(sum) / 12;

    int bIndex = 0; // Indeks untuk array B
    int cIndex = 0; // Indeks untuk array C

    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[bIndex] = A[i];
            bIndex++;
        } else if (A[i] < average) {
            C[cIndex] = A[i];
            cIndex++;
        }
    }

    cout << "Isi array A: ";
    for (int i = 0; i < 12; i++) {
        cout << A[i] << "|";
    }
    cout << endl;

    cout << "Isi array B: ";
    for (int i = 0; i < bIndex; i++) {
        cout << B[i] << "|";
    }
    cout << endl;

    cout << "Isi array C: ";
    for (int i = 0; i < cIndex; i++) {
        cout << C[i] << "|";
    }
    cout << endl;

    return 0;
}
