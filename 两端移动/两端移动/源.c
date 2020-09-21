#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char a1[] = { "fanye666" };
	char a2[] = { "********" };
	int i;
	for (i = 0; i < 5; i++)
	{
		a2[i] = a1[i];
		a2[9-i] = a1[9-i];
		printf("%s\n", a2);
	}
	system("pause");
	return 0;
}