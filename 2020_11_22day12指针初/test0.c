#include<stdio.h>
#include<windows.h>
int main()
{
    //unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long *pulPtr;
	//pulPtr = pulArray; // ����������������Ԫ�ص�ַ�����pulptrָ����������е�һ��Ԫ�ص�λ��
	//*(pulPtr + 3) += 3; // pulptr+3���ʵ��������е�����Ԫ��(�����±��0��ʼ)���ʽ�9��Ϊ9+3=12
	//printf( "%d %d\n", *pulPtr, *(pulPtr + 3)); // ��ӡ��һ���͵�����Ԫ�أ���ˣ���ӡ6��12

   int n = 10;
   char *pc = (char*)&n;
   int *pi = &n;

	printf("%p\n", &n);//009CFDFC
	printf("%p\n", pc);//009CFDFC
	printf("%p\n", pc + 1);//009CFDFD  +1
	printf("%p\n", pi);//009CFDFC 
	printf("%p\n", pi + 1);//009CFE00 +4
	system("pause");
	return 0;
}