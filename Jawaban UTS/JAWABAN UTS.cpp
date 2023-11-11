#include <stdio.h>
#include <unistd.h>

int main(){
	int ketebalan[] = {6,8,12,24,30,36,42,49.50};
	int waktu[] = {1,2,3,4,5,6,7,8,9,};
	int jumlah_pengelasan = sizeof(ketebalan)/sizeof(ketebalan[0]);
	
	printf("Tombol start ditekan.\n");
	printf("Motor listrik utama aktif dan berputar 180 derajat.\n");
	
	for(int i =0;i<jumlah_pengelasan;i++){
		int nilai_tengah = ketebalan[i] / 2;
		
		printf("masukan Proses pengelasan ketebalan %d .\n");
		scanf("%d", &nilai_tengah);
		printf("Motor listrik utama berputar dan berpindah pada nilai tengah.\n");
		sleep(1*2);
		printf("Motor listrik lengan tungkai berputar 45 derajat.\n");
		sleep(1*2);
		printf("Motor listrik jari robot mendekati objek yang akan dilas.\n");
		sleep(1*2);
		printf("Proses pengelasan berlangsung selama %d detik.\n");
		sleep(1*2);
		printf("pengelasan selesai.\n");
	}
	
	return 0;
}
