#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int x;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13 };
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]);
	printf("输入要找的数字:\n");
	scanf("%d", &x);
	while (1)
	{
		int mid = (left + right) / 2;
		if (a[mid] == x)
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
		if (a[mid] > x)
		{
			right = mid-1;
		}
		if (a[mid] < x)
		{
			left = mid+1;
		}
		if (left>right)
		{
			printf("没找到!\n");
			break;
		}

	}
	
	system("pause");
	return 0;
}