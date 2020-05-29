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
	system("title 띄어쓰기 횟수 알려주는 앵무새 - by jisci");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	puts("앵무새 : 안녕! 나는 앵무새야. 띄어쓰기가 몇 번 쓰였는지 찾아주지! 문장을 입력해봐!\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	puts("(주의! 한 번 계산하면 프로그램을 다시 실행해 주세요. 1회용 입니다. 1회 초과 사용하면 결과가 틀립니다.)\n");

	i = 0;
	for (;;)
	{
		int n = (rand() % 14) + 1; //1 ~ 15
		scanf("%s", S);

		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (n + 1));
		printf("당신 : %s\n\n\n\n\n", S);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
		printf("앵무새 : 촣 띄어쓰기가 %d개 있어!\n\n", i);

		i++;
	}

	free(S);
	return 0;
}