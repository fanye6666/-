#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#define s 520
int main()
{
	int n;
	while (1)
	{
		printf("我想的啥数？\n");
		scanf("%d", &n);
		if (n == s)
		{
			printf("猜对了!\n");
			break;
		}
		printf("不对哟!\n重新猜猜");
	}
	system("pause");
	return 0;
}