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
		printf("%d��ż��\n", a);
	}
	else
	{
		printf("%d������\n", a);
	}
	system("pause");
	return 0;
}