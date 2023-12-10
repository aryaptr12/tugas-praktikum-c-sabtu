#include <stdio.h>

int main() {
	char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
	char c;
	int count = 0, found = 0;
	
	printf("Masukan karakter = ");
	scanf(" %c", &c);
	
	for (int i = 0; i < 10; i++) {
		if (A[i] == c) {
			found = 1;
			count++;
		}
	}
	
	if (found) {
		printf("ADA\n%d", count);
	} else {
		printf("TIDAK ADA");
	}
	
	return 0;
}
