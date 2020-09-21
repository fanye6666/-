#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int sn, n, i;
	sn = 1;
	scanf("%d", &n);
	for (i = 1; i < (n+1);i++)
	{
		sn = sn*i;
	}
	printf("%dµÄ½×³ËÎª:%d\n", n, sn);
	system("pause");
	return 0;
}