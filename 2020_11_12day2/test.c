#include <stdio.h>
#include <windows.h>
#include <math.h>
//int IsPrime(int n)
//{
//	int top = (int)sqrt(n);//强转类型
//  //sqrt开根号 头文件 math.h   sqrt类型是double
//	for (int i = 2; i <=top; i++)
//		{
//			if (n%i == 0)
//			    return 0;
//			else 
//				return 1;
//		}
//}
//int main()
//{
//	//实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数
//	for (int i = 100; i <= 200; i++)
//	{
//		//1 -> yes, 0-> no
//		int ret = IsPrime(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//函数判断year是不是润年。
//int LeapYear(int i)
//{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//}
//int main()
//{
//	int year=1;
//	scanf_s("%d", &year);
//	int ret = LeapYear(year);
//		if (1 == ret)
//		{
//			printf("是闰年");
//		}
//		else
//			printf("不是闰年");
//		system("pause");
//	return 0;
//}

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





