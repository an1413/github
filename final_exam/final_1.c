#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
	FILE* fp = NULL; //���� ����


	char buf1[SIZE];
	char buf2[SIZE];
	char buf3[SIZE];
	int count = 0;

	fp = fopen("sample.txt", "w"); //���� ����!!
	printf("'sample.txt'���� ������ ���ڿ� ����\n");

	if (fp != NULL) { // ���ϻ��� �ƴ���?
		printf("simple.txt ���ϻ��� �Ϸ�\n");
	}

	printf("[1]���ڿ��� �Է��ϼ��� : ");
	scanf("%s", buf1);
	fprintf(fp, "%s", buf1);
	fp = fopen("sample.txt", "r");
	printf("���Ͽ� �߰��� ���ڿ� : %s\n", buf1);


	printf("[2]���ڿ��� �Է��ϼ��� : ");
	scanf("%s", buf2);
	fprintf(fp, "%s", buf2);
	printf("���Ͽ� �߰��� ���ڿ� : %s\n", buf2);


	printf("[3]���ڿ��� �Է��ϼ��� : ");
	scanf("%s", buf3);
	fprintf(fp, "%s", buf3);

	printf("���Ͽ� �߰��� ���ڿ� : %s\n", buf3);



	fclose(fp);
	if (fp == 0) {
		printf("sample.txt ���� �ݱ� �Ϸ�\n");
	}


	return 0;
}
