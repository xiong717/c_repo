#include<stdio.h>
#include<windows.h>
int main()
{
 //   int a = 0x11223344;
	//char *pc = (char*)&a;
	//*pc = 0;
	//printf("%x\n", a);//0x11223300
/*���裬a�����ĵ�ַΪ0x64����a�������ڴ��е�ģ��Ϊ��
		0x64 | 44 |
		0x65 | 33 |
		0x66 | 22 |
		0x67 | 11 |
		*pc=0������44λ�������ݸ�Ϊ0���޸����֮��a������Ϊ��0x11223300*/


	//int arr[] = { 1, 2, 3, 4, 5 };
	//short *p = (short*)arr; //ָ��p������Ϊshort*���͵ģ����pÿ��ֻ�����������ֽڣ�forѭ�������������ݽ����޸�ʱ��һ�η��ʵ��ǣ�
 //   int i = 0;            //arr[0]�ĵ������ֽڣ�arr[0]�ĸ������ֽڣ�arr[1]�ĵ������ֽڣ�arr[1]�ĸ������ֽ�
	//for (i = 0; i<4; i++)
	//{
	//	*(p + i) = 0;          //i=0; arr[0]=0   i=1 arr[1]=0(����
	//}                          //i=2  arr[2]=0   i=3 arr[3]=0(����
	//                           //arr[4]=5������
	//for (i = 0; i<5; i++)
	//{
	//	printf("%d ", arr[i]);// 00005������//��ȷ0   0   3   4   5
	//}
 ///*��ַ 0x00D6F7EC  00 00 00 00  ....
	//	0x00D6F7F0  00 00 00 00  ....
	//	0x00D6F7F4  03 00 00 00  ....
	//	0x00D6F7F8  04 00 00 00  ....
	//	0x00D6F7FC  05 00 00 00*/

    //unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long *pulPtr;
	//pulPtr = pulArray; // ����������������Ԫ�ص�ַ�����pulptrָ����������е�һ��Ԫ�ص�λ��
	//*(pulPtr + 3) += 3; // pulptr+3���ʵ��������е�����Ԫ��(�����±��0��ʼ)���ʽ�9��Ϊ9+3=12
	//printf( "%d %d\n", *pulPtr, *(pulPtr + 3)); // ��ӡ��һ���͵�����Ԫ�أ���ˣ���ӡ6��12

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