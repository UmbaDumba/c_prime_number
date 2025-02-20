#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;

	printf("2 이상의 정수 입력 >> ");
	scanf("%d", &n);

	int primes[100];
	int count = 0;
	for (int i = 2; i <= n; i++) {
		//int flag = 1;
		int j;
		for (j = 0; j < count; j++) {
			if (i % primes[j] == 0) {
				//flag = 0;
				break;
			}
		}
		if (j == count) {
			// 소수임!
			printf("%3d ", i);
			primes[count] = i;
			count++;
			if (count % 5 == 0) printf("\n");
			
		}


	}

	return 0;
}