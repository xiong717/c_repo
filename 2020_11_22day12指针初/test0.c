#include<stdio.h>
#include<windows.h>
int main()
{
 //   int a = 0x11223344;
	//char *pc = (char*)&a;
	//*pc = 0;
	//printf("%x\n", a);//0x11223300
/*假设，a变量的地址为0x64，则a变量在内存中的模型为：
		0x64 | 44 |
		0x65 | 33 |
		0x66 | 22 |
		0x67 | 11 |
		*pc=0，即将44位置中内容改为0，修改完成之后，a中内容为：0x11223300*/


	//int arr[] = { 1, 2, 3, 4, 5 };
	//short *p = (short*)arr; //指针p的类型为short*类型的，因此p每次只能所有两个字节，for循环对数组中内容进行修改时，一次访问的是：
 //   int i = 0;            //arr[0]的低两个字节，arr[0]的高两个字节，arr[1]的低两个字节，arr[1]的高两个字节
	//for (i = 0; i<4; i++)
	//{
	//	*(p + i) = 0;          //i=0; arr[0]=0   i=1 arr[1]=0(错误）
	//}                          //i=2  arr[2]=0   i=3 arr[3]=0(错误）
	//                           //arr[4]=5（错误）
	//for (i = 0; i<5; i++)
	//{
	//	printf("%d ", arr[i]);// 00005（错误）//正确0   0   3   4   5
	//}
 ///*地址 0x00D6F7EC  00 00 00 00  ....
	//	0x00D6F7F0  00 00 00 00  ....
	//	0x00D6F7F4  03 00 00 00  ....
	//	0x00D6F7F8  04 00 00 00  ....
	//	0x00D6F7FC  05 00 00 00*/

    //unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long *pulPtr;
	//pulPtr = pulArray; // 数组名代表数组首元素地址，因此pulptr指向的是数组中第一个元素的位置
	//*(pulPtr + 3) += 3; // pulptr+3访问的是数组中第三个元素(数组下标从0开始)，故将9改为9+3=12
	//printf( "%d %d\n", *pulPtr, *(pulPtr + 3)); // 打印第一个和第三个元素，因此：打印6和12

 //  int n = 10;
 //  char *pc = (char*)&n;
 //  int *pi = &n;
	//printf("%p\n", &n);//009CFDFC
	//printf("%p\n", pc);//009CFDFC
	//printf("%p\n", pc + 1);//009CFDFD  +1
	//printf("%p\n", pi);//009CFDFC 
	//printf("%p\n", pi + 1);//009CFE00 +4
	system("pause");
	return 0;
}