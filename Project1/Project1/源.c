#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	int a;
	printf("好好学习？(0/1)>:");
	scanf("%d", &a);
	if (a == 1)
		printf("好offer!\n");
	else
		printf("卖红薯！\n");
		system("pause");
	return 0;
}