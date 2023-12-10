#include <stdio.h>

int main() {
	int A[11]= {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19,};
	int N, i, found = 0;
	
	printf("Masukan bilangan integer = ");
	scanf("%d", &N);
	
	for (i = 0; i < 11; i++) {
		if (A[i] == N) {
			found = i;
			printf("ADA\nLokasi bilangan yang sama: %d", i);
			
		}
	}
	
	if (!found) {
		printf("TIDAK ADA");
	}
	
	return 0;
}
