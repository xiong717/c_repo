#include<stdio.h>
#include<windows.h>
//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a=20;
//	int b=40;
//	int c=0;
//	//加上这个就不正确了scanf_s("&d %d",&a,&b);
//	while (a%b!=0)
//	{
//		c = a%b;//辗转相除法
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d", b);
//	system("pause");
//	return 0;
//}

//打印1000年到2000年之间的闰年 4年一润并且百年不润，每400年再润一次
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//    system("pause");
//	return 0;
//}

//打印100~200之间的素数
//int main()
//{
//	int i;
//	int j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	
//	system("pause");
//	return 0;
//}
//优化
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 101; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//    printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i=0;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10== 9))//前者判断个位是否等于9，后者判断十位是否等于9
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	system("pause");
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (flag*1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
////输出double类型(双精度实型)%lf格式以及float类型(单精度实型)%f格式，默认输出6位小数 
////要输出n位小数，那么可以用%.nlf的格式 %。10lf 输出十位小数
//	system("pause");
//	return 0;
//}

//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 34, 67, 4, 45, 68, 56, 78, 84, 23, 49 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int result = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%d ", i, j, result);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//完成上课的猜数字游戏
//void menu()
//{
//	printf("#######################################\n");
//	printf("####1 play              2 exit   ######\n");
//	printf("#######################################\n");
//}
//void Game()
//{
//	srand((unsigned)time(NULL));
//	int r = rand() % 100 + 1;//表示范围是从0-100 任何数取模100都是0-99 
//	while (1)
//	{
//		int n = 0;
//		printf("你猜#");
//		scanf_s("%d", &n);
//		if (n > r)
//		{
//			printf("你猜大了\n");
//		}
//		else if (n < r)
//		{
//			printf("你猜小了\n");
//		}
//		else
//		{
//			printf("你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	
//	while (!quit)
//	{
//		menu();
//		int select = 0;
//		scanf_s("%d", &select);
//		switch (select)
//		{
//		case 1:
//			Game();
//			break;
//		case 2:
//			quit = 1;
//			printf("bye bye\n");
//			break;
//		default:
//			printf("你输入有误，请重新输入\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

