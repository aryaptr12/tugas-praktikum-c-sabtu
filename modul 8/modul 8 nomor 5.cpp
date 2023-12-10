#include <iostream>
using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    int index_e = 0;
    for (int i = 0; i < 15; i++) {
        if (data[i] % 2 != 0 && data[i] != 999) {
            A[index_e] = data[i];
            index_e++;
        }
    }
   
    for (int i = 0; i < index_e; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}
