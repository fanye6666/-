#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#define s 520
int main()
{
	int n;
	while (1)
	{
		printf("�����ɶ����\n");
		scanf("%d", &n);
		if (n == s)
		{
			printf("�¶���!\n");
			break;
		}
		printf("����Ӵ!\n���²²�");
	}
	system("pause");
	return 0;
}