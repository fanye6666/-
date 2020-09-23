#include <stdio.h>
#include <windows.h>

//1*1=1
//1*2=2 2*2=4
//1*3=3 2*3=6 3*3=9

int main()
{
	int  i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%ix%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}