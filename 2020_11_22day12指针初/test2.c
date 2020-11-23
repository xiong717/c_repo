//逆序字符串 写一个函数，可以逆序一个字符串的内容。
#include<stdio.h>
#include<windows.h>
void reverse(char arr[])
{
	char a = strlen(arr);
	char* left = arr;
	char* right = arr + a-1;
	for (int i = 0; i < a/2; i++)
	{
		char tmp;
		tmp= *left;
		* left = * right;
		* right = tmp;
		left++;
		right--;
	}
		printf("%s",arr);//%s 格式化字符串 可以输入一串不超过20字符的字符串。
		/*for (int i = 0; i < a; i++)
		{
			printf("%c", arr[i]);//%c格式对应的是单个字符 
		}*/
/* %c对应类型为char, %s对应类型为char *, 即字符串.
   用作输入时, 二者参数都要传char * 型.
   %c输入函数只会对一个字节空间赋值.而%s会一直赋值, 直到输入中遇到空白字符为止.
   用作输出时, %c传char类型, 输出一个字符. %s传char*类型参数, 输出到\0为止.*/
}
int main()
{
	char arr[] = "hello world!";
	reverse(arr);
	system("pause");
	return 0;
}
