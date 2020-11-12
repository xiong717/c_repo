#include<stdio.h>
#include<windows.h>

//实现一个函数来交换两个整数的内容
//void change(int *i, int *j)
//{
//	int a = *j;//用的是指针
//	*j = *i;
//	*i = a;
//}
//int main()
//{
//	int m = 10;
//	int n = 20;
//	printf("%d %d\n", m, n);
//	change(&m, &n);
//	printf("%d %d\n", m, n);
//	system("pause");
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void MultiplicationTable(int row)
//{
//	for (int i = 1; i <= row; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int row = 0;
//	int col = 0;
//	row = col;
//	scanf_s("%d", &row);
//	MultiplicationTable (row);
//	system("pause");
//	return 0;
//}