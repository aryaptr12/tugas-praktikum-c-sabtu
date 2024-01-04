#include <iostream>
using namespace std;

int main() {
    char A[] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A','\0'};
    int counts[26] = {0}; 

  
    for (int i = 0; A[i] != '\0' ; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            counts[A[i] - 'A']++;
        }
    }

   
    char hurufTerbanyak;
    int jumlahTerbanyak = 0;

    for (int i = 0; i < 26; i++) {
        if (counts[i] > jumlahTerbanyak) {
            jumlahTerbanyak = counts[i];
            hurufTerbanyak = 'A' + i;
        }
    }

 
    cout << "Array A: ";
    for (int i = 0; A[i] != '\0'; i++) {
        cout << A[i] << ' ';
    }
    cout << endl;

    cout << "Jumlah huruf terbanyak: " << jumlahTerbanyak << endl;
    cout << "Huruf terbanyak: " << hurufTerbanyak << endl;

    return 0;
}

