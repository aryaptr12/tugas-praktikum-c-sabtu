#include <iostream>
using namespace std;

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12] = {0};  

    cout << "isi array A: ";
    for (int I = 0; I < 5; I++) {
        cout << A[I] << " ";
    }

    cout << "\nIsi Array B: ";
    for (int I = 0; I < 7; I++) {
        cout << B[I] << " ";
    }

    int J = 0;
	 
    for (int I = 0; I < 5; I++) {
        if (A[I] > 10) {
            C[J] = A[I];
            J++;
        }
    }
    
    for (int I = 0; I < 7; I++) {
        if (B[I] > 10) {
            C[J] = B[I];
            J++;
        }
    }
    cout << "\n==================================";
    cout << "\nisi Array C:|";
    for (int I = 0; I < J; I++) {
        cout << C[I] << "|";
    }
    return 0;
}
