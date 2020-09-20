#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int hs(int a)
{
	int  x, y, z,he;
	y = a / 100;
	x = (a - 100 * y) / 10;
	z = a - y * 100 - x * 10;
	he = y*y*y + x*x*x + z*z*z;
	return he;
}
int main()
{
	int a, i;
	for (i = 0; i < 1000; i++)
	{
		a = hs(i);
		if (a == i)
			printf("%d是水仙花数\n", i);
	}
	system("pause");
	return 0;
}