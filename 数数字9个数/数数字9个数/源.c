#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int a, b,c,d=0;
	for (a = 1; a < 101; a++)
	{
		b = a % 10;
		c = (a - b) / 10;
		if (b == 9 || c == 9)
		{
			d = d++;
		}
	}
	printf("%d\n", d);
	system("pause");
	return 0;
}