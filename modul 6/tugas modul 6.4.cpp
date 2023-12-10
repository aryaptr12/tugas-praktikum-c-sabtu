#include <stdio.h>

int main() {
    int waktu = 100; // waktu dalam detik
    int kecepatan = 2; // kecepatan dalam meter/detik
    int jarak;

    jarak = waktu * kecepatan;

    printf("Jarak yang ditempuh adalah %d meter\n", jarak);

    return 0;
}
