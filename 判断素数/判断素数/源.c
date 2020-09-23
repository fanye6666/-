#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void ss(int x)
{
	int i;
	if (x % 2 == 0)
	{
		printf("%d是素数\n", x);
	}
	for (i =3 ; i < x / 2; i=i+2)
	{
		if (x%i==0)
		{
			printf("%d是素数\n", x);
		}
	}
	if (x%2!=0&&i>(x / 2))
	{
		printf("%d不是素数\n", x);
	}
}
int main()
{
	int a;
	printf("请输入:\n");
	scanf("%d", &a);
	ss(a);
	system("pause");
	return 0;
}