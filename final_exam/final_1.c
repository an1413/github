#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
	FILE* fp = NULL; //파일 생성


	char buf1[SIZE];
	char buf2[SIZE];
	char buf3[SIZE];
	int count = 0;

	fp = fopen("sample.txt", "w"); //파일 열기!!
	printf("'sample.txt'파일 생성과 문자열 저장\n");

	if (fp != NULL) { // 파일생성 됐는지?
		printf("simple.txt 파일생성 완료\n");
	}

	printf("[1]문자열을 입력하세요 : ");
	scanf("%s", buf1);
	fprintf(fp, "%s", buf1);
	fp = fopen("sample.txt", "r");
	printf("파일에 추가한 문자열 : %s\n", buf1);


	printf("[2]문자열을 입력하세요 : ");
	scanf("%s", buf2);
	fprintf(fp, "%s", buf2);
	printf("파일에 추가한 문자열 : %s\n", buf2);


	printf("[3]문자열을 입력하세요 : ");
	scanf("%s", buf3);
	fprintf(fp, "%s", buf3);

	printf("파일에 추가한 문자열 : %s\n", buf3);



	fclose(fp);
	if (fp == 0) {
		printf("sample.txt 파일 닫기 완료\n");
	}


	return 0;
}
