#define _CRT_SECURE_NO_WARNINGS;
int get_num(void);
#include<stdio.h>
int main(void) {
	int result;
	result = get_num();
	printf("��ȯ�� ��:%d\n", result);
	return 0;
}


int get_num(void) {
	int num;
	print("����� �Է��ϼ���:");
	scanf("%d\n", &num);
	while (num < 0) {
		printf("����� ��Ȯ�ϰ� �Է��ϼ���!!\n");
		printf("��� �Է�:");
		scanf("%d\n", &num);
		

	}return num;

}
