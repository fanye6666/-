#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int i,a,b;
	for (i = 1; i < 11; i++)
	{
		a = 0;

		while (a < i)
		{
			printf("*");
			a++;
		}
		printf("\n");
	}
	for (i = 1; i < 11; i++)
	{
		a = 11;
		while (a > i)
		{
			printf("*");
			a--;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}