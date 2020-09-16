#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>


int main()
{
	int a[4],max,i;
	printf("请输入4个整数:");
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	max = a[0];
	for (i=1;i<4;i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		else if (max>a[i])
		{
			max = max;
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}