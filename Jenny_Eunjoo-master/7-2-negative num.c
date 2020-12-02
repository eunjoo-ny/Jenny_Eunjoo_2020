#define _CRT_SECURE_NO_WARNINGS;
int get_num(void);
#include<stdio.h>
int main(void) {
	int result;
	result = get_num();
	printf("반환된 값:%d\n", result);
	return 0;
}


int get_num(void) {
	int num;
	print("양수를 입력하세요:");
	scanf("%d\n", &num);
	while (num < 0) {
		printf("양수를 정확하게 입력하세요!!\n");
		printf("양수 입력:");
		scanf("%d\n", &num);
		

	}return num;

}
