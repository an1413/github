#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
	char *answer;
	FILE* fp;
	char filename[SIZE];
	char buffer[SIZE];

	printf("���� �̸�:");
	gets_s(filename, SIZE);

	if ((fp = fopen(filename, "r")) == NULL)
		printf("������ ������ ����");

	
 //�� ã��
	for (int i = 0; i < 3; i++) {
		printf("�˻��� �ܾ �Է��ϼ��� :");
		char arr[SIZE];
		gets_s(arr, SIZE);
		for (int i = 0; feof(fp) == 0; i++) {
			char* p;
			fgets(buffer, SIZE, fp);
			if (strstr(buffer, arr) != NULL) {
				printf("%s:%d ", filename, i + 1);
				puts(buffer);
			}
		}
	}
		
	
	
		return 0;
	}
		

	