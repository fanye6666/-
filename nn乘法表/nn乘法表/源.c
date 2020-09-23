#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void cfb(int n)
{
	int i,j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2dx%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a;
	printf("请输入:\n");
	scanf("%d", &a);
	printf("%dx%d的乘法表如下:\n", a, a);
	cfb(a);
	system("pause");
	return 0;
}