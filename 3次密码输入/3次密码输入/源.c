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
			printf("������ȷ\n");
			break;
		}
		if (b != mm)
		{
			printf("�������\n");
		}
	}
	if (3 == a)
	{
		if (b != mm)
			printf("���λ���������\n");
	}
	system("pause");
	return 0;
}