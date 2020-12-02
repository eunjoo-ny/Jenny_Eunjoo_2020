#define _CRT_SECURE_NO_WARNINGS;
#include<stdio.h>
int get_num(void);
int main(void) {
	int result;
	result = get_num();
	//printf("return_value:%d\n", result);
	return 0;

}
int get_num(void) {
	int num;
	printf("Insert a positive number:");
	scanf("%d\n", &num); 
	printf("return_value:%d\n", num);
	return num;


}

