#include<stdio.h>
#include<windows.h>
#include<string.h>
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣��������ַ����е��ַ��������С�

//�ǵݹ� ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
//2. ��������ָ��λ���ϵ��ַ�
//3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���
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
//�ַ������򣨵ݹ�ʵ��)
//abcde->
//����ȷ
//void reverse_string(char str[])
//{
//	int len = strlen(str);      //�����ַ���string�ĳ���
//	char tmp = *str;            //����һ�����������ַ�����һ��Ԫ�ظ�ֵ������
//	*str = *(str + len- 1);     //���ַ������һ��Ԫ�����ݸ�ֵ����һ��Ԫ��
//
//	*(str+ len- 1)= '\0';                     //�ٰ��ַ������һ��Ԫ�ر�Ϊ'\0'
//	if (strlen(str+ 1) > 1)
//	{
//		return reverse_string(str+ 1);       //ѭ������
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

//�������
//void reverse_string(char arr[]) {
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1) {         //���
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�� ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//1729->dig(172)->dig(17)->dig(1)=1   ����1+7+2+9
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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//�ǵݹ� 
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
