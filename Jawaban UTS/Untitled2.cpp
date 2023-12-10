#include <iostream>

using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int length = 11;
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }
    
    cout << "Isi array setelah menyimpan nilai genap menjadi:" << endl;
    for (int i = 0; i < count; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
