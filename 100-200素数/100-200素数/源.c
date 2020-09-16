#include <stdio.h>
#include <windows.h>
int main()
{

	int a, b, f;
	for (f = 100; f < 201; f++)
	{
		for (b = 2; b < f; b++)
		{
			a = f%b;
			if (a == 0)
			{
				printf("f=%d\n", f);
				b = f;
			}
		}
	}
	system("pause");
	return 0;
}