#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>


int main()
{
	int a, b, c,d,e,f,g;
	printf("输入2个数:");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	for (c=1; c < (a+1); c++)
	{
		d = c;
		e = a%c;
		f = b%d;
		if (e == 0 && f == 0)
		{
			g = c;
		}
	}
	printf("%d与%d最大公约数为%d\n",a,b ,g);
	system("pause");
	return 0;
}