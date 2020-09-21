#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int jc(int n)
{
	int i, sn;
	sn = 1;
	for (i = 1; i < (n + 1); i++)
	{
		sn = sn*i;
	}
	return sn;
}
int main()
{
	int sn , i, n;
	sn = 0;
	scanf("%d", &n);
	for (i = 1; i < (n + 1); i++)
	{
		sn = sn + jc(i);
	}
	printf("%d", sn);
	system("pause");
	return 0;
}