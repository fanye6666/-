#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void binsearch(int x)
{
	int v[] = {1,2,3}, y;
	for (y = 0; y < 3; y++)
	{
		if (x == v[y])
			break;
	}
	printf("%dÔÚv[%d]ÖÐ\n", x, y);
}
int main()
{
	int n;
	scanf("%d", &n);
	binsearch(n);
	system("pause");
	return 0;
}