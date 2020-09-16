#include <stdio.h>
#include <windows.h>
int main()
{
	int a, b,c;
	for (a = 1000; a < 2001; a++)
	{
		b = a % 4;
		if (b == 0)
		{
			b = a % 100;
			c = a % 400;
			if (b != 0||c==0)
			{
				printf("%d\n", a);
			}
		}
	}
	system("pause");
	return 0;
}