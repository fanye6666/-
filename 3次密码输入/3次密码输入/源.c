#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#define mm 520
int main()
{
	int a, b, c;
	for (a = 0; a < 3; a++)
	{
		scanf("%d", &b);
		if (b == mm)
		{
			printf("密码正确\n");
			break;
		}
		if (b != mm)
		{
			printf("密码错误\n");
		}
	}
	if (3 == a)
	{
		if (b != mm)
			printf("三次机会已用完\n");
	}
	system("pause");
	return 0;
}