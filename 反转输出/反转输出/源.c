#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char x, a;
	while ((x = getchar())!=EOF)
	{
		if (x >= 65 && x <= 90)
		{
			a = x + 32;
			printf("%c",a);
		}
		if (x >= 97&& x <= 122)
		{
			a = x - 32;
			printf("%c", a);
		}
		else
		{
			printf("%c", x);
		}
	}
	system("pause");
	return 0;
}