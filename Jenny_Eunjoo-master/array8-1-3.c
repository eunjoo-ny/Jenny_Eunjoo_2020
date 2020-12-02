#include<stdio.h>
int main(void) {
	int A[3] = { 1,2,3 };
	int B[10];
	int i;
	int j;

	for (i = 0;i < 10;i++) {
		j = i % 3;
		if (j == 0) {
			 B[i] = A[j];
		}
		else if (j == 1) {
			B[i] = A[j];
			
		}
		else {
			B[i] = A[j];
		}
		printf("%10d", B[i]);
	}
	return 0;
}