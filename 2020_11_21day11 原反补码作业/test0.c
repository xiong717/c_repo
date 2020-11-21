/*杨辉三角
在屏幕上打印杨辉三角。
1     arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]
1 1
1 2 1
1 3 3 1*/
#include<stdio.h>
#include<windows.h>

int main()
{
	int n = 1;
	int arr[30][30] = {0};
	arr[0][0] = 1;
	printf("请输入行数");
	scanf_s("%d", &n);
	int i, j;
		for (i = 1; i < n; i++)
		{
			arr[i][0] = 1;
			for (j = 1; j <= i; j++)
			{
				if (i = j)
				{
					arr[i][j] = 1;
				}
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	system("pause");
	return 0;
} 

//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //第一行直接填好，播下种子
//	int i, j;
//	for (i = 1; i < n; i++) //从第二行开始填
//	{
//		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
//		for (j = 1; j <= i; j++) //从第二列开始填
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
//		}
//	}
//
//	for (i = 0; i < n; i++) //填完打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int n = 1;
//	int arr[30][30] = {0};
//	scanf_s("%d", &n);
//	yangHuiTriangle(n);
//	system("pause");
//	return 0;
//}
