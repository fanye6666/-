#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void hh(int x,int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}
int main()
{
	int a, b;
	printf("������Ҫ��λ��������:");
	scanf("%d,%d", &a, &b);
	hh(a, b);
	printf("��λ��Ϊ:%d %d", a, b);
	system("pause");
	return 0;
}