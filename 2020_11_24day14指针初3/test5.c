//打印菱形
#include<stdio.h>
#include<windows.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf_s("%d", &line);//7
	//打印上半部分
	for (i = 0; i<line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for (i = 0; i<line - 1; i++)//  打 印下半部分
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
