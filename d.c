#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	char* S = malloc(5000);
	int i;
	system("title ���� Ƚ�� �˷��ִ� �޹��� - by jisci");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	puts("�޹��� : �ȳ�! ���� �޹�����. ���Ⱑ �� �� �������� ã������! ������ �Է��غ�!\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	puts("(����! �� �� ����ϸ� ���α׷��� �ٽ� ������ �ּ���. 1ȸ�� �Դϴ�. 1ȸ �ʰ� ����ϸ� ����� Ʋ���ϴ�.)\n");

	i = 0;
	for (;;)
	{
		int n = (rand() % 14) + 1; //1 ~ 15
		scanf("%s", S);

		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (n + 1));
		printf("��� : %s\n\n\n\n\n", S);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
		printf("�޹��� : �c ���Ⱑ %d�� �־�!\n\n", i);

		i++;
	}

	free(S);
	return 0;
}