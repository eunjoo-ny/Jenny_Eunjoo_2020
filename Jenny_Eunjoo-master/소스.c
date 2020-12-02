#include<stdio.h>

int main(void) {
	int i, j;
	for (i = 1;i <= 100;i++) {
		for (j = 2;j <= i - 1;j++) {
			if (i % j == 0) {
				break;
			}
			if(i==j){
				printf("the prime number less than 100:%d"\n, i);
				
			}
			printf("%d\n");
			return 0;
		}
	}
