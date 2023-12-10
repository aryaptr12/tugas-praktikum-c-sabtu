#include <iostream>

using namespace std;

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;

    cout << "Masukkan bilangan integer = ";
    cin >> C;

    int count = 0;
    int found = 0;

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            found = 1;
            count++;
        }
    }

    if (found) {
        cout << "ADA\n";
        cout << count << " ";
    } else {
        cout << "TIDAK ADA";
    }

    return 0;
}

