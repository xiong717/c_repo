#include<stdio.h>
#include<windows.h>
int main()
{
    //unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long *pulPtr;
	//pulPtr = pulArray; // 数组名代表数组首元素地址，因此pulptr指向的是数组中第一个元素的位置
	//*(pulPtr + 3) += 3; // pulptr+3访问的是数组中第三个元素(数组下标从0开始)，故将9改为9+3=12
	//printf( "%d %d\n", *pulPtr, *(pulPtr + 3)); // 打印第一个和第三个元素，因此：打印6和12

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