#include<stdio.h>
#include<windows.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
////1234->����123->����12->����1  
////	 |        |       |      |
////(1 2 3 4)(1 2 3) (1 2)  	(1��			         1
//int main()
//{
//	int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ� 5!->5*4!->4*3!->3*2!->2*1!
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
//�ǵݹ�
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
