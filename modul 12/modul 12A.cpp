#include <iostream>
using namespace std;
int main() {
    char A[] = { 'J', 'A', 'K', 'A', 'R', 'T', 'A', };
    char inputChar;
    int flag = 0;

    cout << "Hasil: JAKARTA" << endl;
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> inputChar;

    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == inputChar) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "ADA\nHuruf yang sama: " << inputChar << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}
