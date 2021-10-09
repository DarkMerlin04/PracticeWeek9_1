#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	FILE* fp;
	fp = fopen("c:\\temp\\data.txt", "w");
	int i = 0;
	printf("Input data string:\n");
	while(i >= 0)
	{
		scanf("%s", a);
		if (a[i] == '.')
		{
			i = -1;
		}
		fprintf(fp, "%s\n", a);
	}
	fclose(fp);
	return 0;
}