#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#if 0
int main()
{
	//输出1-100之间的奇数
	/*int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf(" %d",i);
		}
	}*/
	//输入1-5 输出weekday 输入6-7 输出weekend
	/*int day;
	printf("输入天数");
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;

	}*/
//	int n = 1; 
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3,n=1
//	case 2:
//		n++;//m=3,n=2
//	case 3:
//		switch (n)
//		{//switch语句允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;//m=4,n=3
//			break;//跳出这个switch语句
//		}
//	case 4:
//		m++;//m=3,n=3
//		break;//跳出语句
//	default://switch表达式的值并不匹配所有case标签的值时，执行default子句后面的语句
//		//每个switch语句中只能出现一条default子句。 但是它可以出现在语句列表的任何位置
//		break;
//}
//	printf("m=%d,n=%d", m, n);
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0/*赋值-判断 等于0为假*/; i++, k++)
//		k++;
////循环多少次（0次）
	//int k = 0;
	//for (;k=0;)//此处k是赋值-判断k的值 为1是真，执行 为0是假
	//{
	//	printf("hello\n");
	//}
	 system("pause");
	return 0;
}
#endif 
//计算n的阶乘
/*int main()
{
	int i;
	int result = 1;
	printf("输入一个数");
	scanf_s("%d", &i);
	for (i; i >= 1; i--)
	{
		result *= i;
	}
	printf("result=%d\n", result);
	system("pause");
	return 0;
}*/
/*int Fact(int i)
{
	int result = 1;
	for (i; i>= 1;i--)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int n;
	scanf_s("%d",&n);
	int result = Fact(n);
	printf("result=%d\n",result);
	system("pause");
	return 0;
}*/
//计算 1!+ 2!+ 3!+ …… + 10!
/*int sum(int n)
{
	int i = 1;
	for (n ; n >= 1; n--)
	{
		i *= n;
	}
	return i ;
}
int main()
{
	int n = 3;
	int result=0 ;
	for (n; n >= 1; n--)
	{
		result += sum(n);
	}
	printf("result=%d", result);
	system("pause");
	return 0;
}*/
/*int Fact(int n)
{
	int result = 1;
	for (int i = n; i >= 1; i--)
	{
		result *= i;
	}
	return result;
}

int FactSum(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += Fact(i);
	}
	return sum;
}
int main()
{
	int start = 1;
	int end = 10;
	int total = FactSum(start, end);
	printf("%d\n", total);
	system("pause");
	return 0;
}*/
//在有序（从小到大）数组里面查找某个数字n
//二分查找法 找到了返回下标，找不到返回-1
//#define NOT_FOUND -1
//int BinSearch(int arr[], int num,int target)
//{
//	int start = 0;
//	int end = num-1;
//	while (start<=end)
//	{
//		int mid = (end + start) / 2;//要考虑溢出
//		if (target<arr[mid]){
//			end = mid - 1;
//		}
//		else if (target>arr[mid]){
//			start = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int target=44;
//	printf("输入要查找的数字");
//	scanf_s("%d", &target);
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int index = BinSearch(arr, num,target);//调用函数
//	printf("index=%d", index);
//	system("pause");
//	return 0;
//}
//编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	while (left <= right){
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\r", arr2);
//		// /r 回车（回到当前行的开端） \n回车换行
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次（只许输入三次密码，若正确则登录成功，否退出程序）

//#define NAME "TOM"
//#define PASSWD "12345"
//
//int Login(int times)
//	{
//		int ret = -1;
//		char name[64];
//		char passwd[64];
//		do{
//			printf("请输入你的账号#");
//			scanf_s("%s", name);
//			printf("请输入你的密码#");
//			scanf_s("%s", passwd);
//			if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
////strcmp比较两个字符串，strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
//				ret = 1;
//				break;
//			}
//			else{
//				times--;
//				printf("你还有%d次机会!\n", times);
//				if (times == 0){
//					printf("不好意思，需要等%d秒才能尝试\n", 3);
//					Sleep(3000);
//					times = 3;
//				}
//			}
//
//
//		} while (1);
//		return ret;
//	}
//int main()
//{
//	int times = 3;
//	int result = Login(times);
//	if (1 == result)
//	{
//		printf("登录成功");
//	}
//	else
//		printf("登录失败");
//	system("pause");
//	return 0;
//}

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




























