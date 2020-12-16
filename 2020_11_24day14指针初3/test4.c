//打印水仙花数

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	int num = 0;
	
	for (num = 0; num <= 1000; num++)
	{ 
		int sum = 0;
		int count = 1;
		int a = num;
		int b = num;
		while (a / 10)
		{
			count++;
			a = a / 10;
		}
		for (int i = 0; i < count; i++)
		{
			sum += pow(b% 10, count);
			b = b / 10;
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
	system("pause");
	return 0;
}

//大神代码
int main()
{
	int i = 0;
	for (i = 0; i <= 1000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1. 求判断数字的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. 计算每一位的次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. 判断
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}
////暴力算法
//int main()
//{
//	int a, b, c, x, i;
//	for (x = 100; x <= 999; x++)
//	{
//		c = x % 10;
//		b = x / 10 % 10;
//		a = x / 100;
//		i = i + 1;
//		if (x == c*c*c + b*b*b + a*a*a)
//		{
//			printf("%d\n", x);
//		}
//	}
//	return 0;
//}
