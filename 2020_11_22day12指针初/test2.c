//�����ַ��� дһ����������������һ���ַ��������ݡ�
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
		printf("%s",arr);//%s ��ʽ���ַ��� ��������һ��������20�ַ����ַ�����
		/*for (int i = 0; i < a; i++)
		{
			printf("%c", arr[i]);//%c��ʽ��Ӧ���ǵ����ַ� 
		}*/
/* %c��Ӧ����Ϊchar, %s��Ӧ����Ϊchar *, ���ַ���.
   ��������ʱ, ���߲�����Ҫ��char * ��.
   %c���뺯��ֻ���һ���ֽڿռ丳ֵ.��%s��һֱ��ֵ, ֱ�������������հ��ַ�Ϊֹ.
   �������ʱ, %c��char����, ���һ���ַ�. %s��char*���Ͳ���, �����\0Ϊֹ.*/
}
int main()
{
	char arr[] = "hello world!";
	reverse(arr);
	system("pause");
	return 0;
}
