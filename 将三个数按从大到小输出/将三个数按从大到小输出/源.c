#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void Hw(int *x, int *y)
{
	int a;
	a = *x;
	*x= *y;
	*y = a;
}
int main()
{	
	int a, b, c;
	printf("ÊäÈë3¸öÊý:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a < b)
	{
		Hw(&a,&b);
	}
	if (a < c)
	{
		Hw(&a, &c);
	}
	if (b < c)
	{
		Hw(&b, &c);
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}