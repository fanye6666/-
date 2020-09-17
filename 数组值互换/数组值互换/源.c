#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
hw(int*x, int*y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int fan1[3] = { 541, 245, 2451 };
	int fan2[3] = { 764, 475, 786};
	int f;
	printf("fan1[]=");
	for (f = 0; f < 3; f++)
	{
		printf("%d ", fan1[f]);
	}
	printf("\n");
	printf("fan2[]=");
	for (f = 0; f < 3; f++)
	{
		printf("%d ", fan2[f]);
	}
	printf("\n");
	printf("»¥»»ºó\n");
	for (f = 0; f < 3; f++)
	{
		hw(&fan1[f], &fan2[f]);
	}
	printf("fan1[]=");
	for (f = 0; f < 3; f++)
	{
		printf("%d ", fan1[f]);
	}
	printf("\n");
	printf("fan2[]=");
	for (f = 0; f < 3; f++)
	{
		printf("%d ", fan2[f]);
	}
	printf("\n");
	system("pause");
	return 0;
}