#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	float  f = 0;
	double i;
	 
	for (i = 1; i < 101; i++)
	{
		f = f - pow(-1 , i)*(1/i);
		printf("%.8f\n", f);
	}
	printf("%.8f\n", f);
	system("pause");
	return 0;
}