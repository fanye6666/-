#include <stdio.h>
#include <windows.h>
int main()
{
	int a, b, c;
	for (a = 1; a < 10; a++)
	{
		for (b = a; b < 10; b++)
		{
			c = a*b;
			if (b == 9)
			{
				printf("%dX%d=%d\n", a, b, c);
			}
			if (b < 9)
			{
				printf("%dX%d=%d ", a, b, c);
			}
			}
	}
	system("pause");
	return 0;
}