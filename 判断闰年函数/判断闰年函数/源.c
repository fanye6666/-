#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void pd(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		printf("%d������\n", x);
	}
	else
	{
		printf("%d��������\n", x);
	}
}
int main()
{
	int a;
	printf("������:\n");
	scanf("%d", &a);
	pd(a);
	system("pause");
	return 0;
}