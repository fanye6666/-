#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int a,b;
	scanf("%d", &a);
	b = a % 2;
	if (0 == b)
	{
		printf("%d是偶数\n", a);
	}
	else
	{
		printf("%d是奇数\n", a);
	}
	system("pause");
	return 0;
}