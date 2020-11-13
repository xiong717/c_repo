#include<stdio.h>
#include<windows.h>
//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
////1234->调用123->调用12->调用1  
////	 |        |       |      |
////(1 2 3 4)(1 2 3) (1 2)  	(1）			         1
//int main()
//{
//	int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归 5!->5*4!->4*3!->3*2!->2*1!
//int factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//     return n*factorial(n-1);
//}
//int main()
//{
//	int n = 5;
//	int result = factorial(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//非递归
//int factorial(int n)
//{
//	int result = 1;
//	while (n>1)
//	{
//		result = result*n;
//		n--;
//	}
//	return result;
//}
//int main()
//{
//	int n = 5;
//	int res = factorial(n);
//	printf("%d\n", res);
//	system("pause");
//	return 0;
//}

//递归和非递归分别实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "abcde";
//	int result = my_strlen(str);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//
//}
//int main()
//{
//	char *str = "abcde";
//	int result = my_strlen(str);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
