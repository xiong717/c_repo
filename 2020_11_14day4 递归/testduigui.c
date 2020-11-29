#include<stdio.h>
#include<windows.h>
#include<string.h>
//编写一个函数 reverse_string(char * string)（递归实现）将参数字符串中的字符反向排列。

//非递归 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
//2. 交换两个指针位置上的字符
//3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
//char reverse_string(char string[])
//{
//	char *left = string;
//	char *right = string+strlen(string)-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	return *string;
//}
//int main()
//{
//	char string[] = "abcdef";
//	printf("%s\n", string);
//	reverse_string(string);
//	printf("%s\n", string);
//	system("pause");
//	return 0;
//}
//字符串逆序（递归实现)
//abcde->
//不正确
//void reverse_string(char str[])
//{
//	int len = strlen(str);      //计算字符串string的长度
//	char tmp = *str;            //定义一个变量，把字符串第一个元素赋值给变量
//	*str = *(str + len- 1);     //把字符串最后一个元素内容赋值给第一个元素
//
//	*(str+ len- 1)= '\0';                     //再把字符串最后一个元素变为'\0'
//	if (strlen(str+ 1) > 1)
//	{
//		return reverse_string(str+ 1);       //循环调用
//	}
//	*(str + len -1) = tmp;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}


//大神代码
//void reverse_string(char arr[]) {
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1) {         //理解
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//1729->dig(172)->dig(17)->dig(1)=1   返回1+7+2+9
//            +9      +2      +7
//int DigitSum(int num)
//{
//	if (num / 10 == 0)
//	{
//		return num;
//	}
//	return num % 10 + DigitSum(num / 10);
//}
//int main()
//{
//	int num = 1;
//	scanf_s("%d", &num);
//	int result = DigitSum(num);
//	printf("%d", result);
//	system("pause");
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
//int pow(int num, int n)
//{
//	if (n > 1)
//	{
//		return num*pow(num, n - 1);
//	}
//	else return num;
//}
//int main()
//{
//	int num= 1;
//	int n = 1;
//	scanf_s("%d %d", &num, &n); 
//	int ret=pow(num, n);
//	printf("%d", ret);
//	system("pause");
//	return 0;  
//}

//递归和非递归分别实现求第n个斐波那契数
//int fib(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else 
//		return fib(n-1)+fib(n-2);
//}
//int main()
//{
//	int n = 1;
//	scanf_s("%d", &n);
//	int result=fib(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//非递归 
//int fib(int n)
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	while (n > 2)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		n--;
//	}
//	return third;
//}
//int main()
//{
//	int n = 1;
//	scanf_s("%d", &n);
//	int result = fib(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

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
