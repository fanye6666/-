#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int qh(int a)
{
	int a1, a2, a3, a4, a5,he;
	a1 = a;
	a2 = a + a * 10;
	a3 = a2 + a * 100;
	a4 = a3 + a * 1000;
	a5 = a4 + a * 10000;
	he = a1 + a2 + a3 + a4 + a5;
	return he;
}
int main()
{
	int a,b;
	printf("输入一个一位数:");
	scanf("%d", &a);
	b = qh(a);
	printf("%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, b);
	system("pause");
	return 0;
}