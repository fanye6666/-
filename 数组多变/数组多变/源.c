#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void ks()
{
	printf("************************************\n");
	printf("*1.初始|2.清空|3.逆置|4.输出|0.退出*\n");
	printf("************************************\n");

}
void init(int a[],int size)
{
	int arr1[] = { 0, 0, 0 };
	scanf("%d,%d,%d,", &arr1[0], &arr1[1], &arr1[2]);
	a = arr1;
}
void empty(int x[],int size)
{
	int arr1[] = { 0, 0, 0 };
	x = arr1;

}
void reverse(int x[],int size)
{
	int arr1[] = {0}, i = 0, sz;
	for (i = 0; i<3; i++)
	{
		arr1[i] = x[i];
	}
	sz = sizeof(arr1) / sizeof(arr1[0]);
	arr1[0] = i;
	for (i=0;i<3;i++)
	{
		if ((sz - 1 - i) == 0)
		{
		 arr1[i] = i;
		}
		else
		{
			 arr1[i] = arr1[sz - 1 - i];
		}
	}
}
int main()
{
	int input = 0;
	int arr[] = {10,0,0,};
	do
	{
		ks();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init(arr,3);
			printf("arr[0]=%d,arrr[1]=%d,arr[2]=%d\n", arr[0], arr[1], arr[2]);
			break;
		case 2:
			empty(arr,3);
			printf("已清空.\n");
			break;
		case 3:
			reverse(arr,3);
			printf("逆置后:\n");
			printf("arr[0]=%d,arrr[1]=%d,arr[2]=%d\n", arr[0], arr[1], arr[2]);
			break;
		case 4:
			printf("arr[0]=%d,arrr[1]=%d,arr[2]=%d\n", arr[0], arr[1], arr[2]);
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}