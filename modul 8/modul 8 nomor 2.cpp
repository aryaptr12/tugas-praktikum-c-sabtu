#include <iostream>
using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    int index_b = 0;
    for (int i = 0; i < 15; i++) {
        if (data[i] > 9) {
            A[index_b] = data[i];
            index_b++;
        }
    }
    
    for (int i = 0; i < index_b; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}
