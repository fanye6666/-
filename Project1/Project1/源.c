#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	int a;
	printf("�ú�ѧϰ��(0/1)>:");
	scanf("%d", &a);
	if (a == 1)
		printf("��offer!\n");
	else
		printf("������\n");
		system("pause");
	return 0;
}