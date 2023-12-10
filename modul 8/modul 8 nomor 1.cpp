#include <iostream>
using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    int index_a = 0;
    for (int i = 0; i < 15; i++) {
        if (data[i] > 9) {
            A[index_a] = data[i];
            index_a++;
        }
    }
    
    for (int i = 0; i < index_a; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}
