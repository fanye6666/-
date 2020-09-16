#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>


int main()
{
	int a, b;
	printf("输入要交换的2个数:");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}