﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main()
{
	FILE* fptr;
	char str[MAX],ch;
	int i = 0;
	fptr = fopen("output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getchar()) != '\n' && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}
