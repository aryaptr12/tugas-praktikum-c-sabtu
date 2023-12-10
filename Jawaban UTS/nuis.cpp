#include <iostream> 
using namespace std;

int main() {
    int A[11];
    int data;
    int index = 0;

    cout << "Masukkan data dari dokumen: ";
    while (cin >> data) {
        if (data > 9) {
            A[index] = data;
            index++;
        }
        if (data == 999) {
            break;
        }
    }

    cout << "Isi array A: ";
    for (int i = 0; i < index; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Isi array A yang disimpan berderetan: ";
    for (int i = 0; i < index; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
