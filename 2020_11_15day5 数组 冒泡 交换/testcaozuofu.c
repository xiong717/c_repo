#include<stdio.h>
#include<windows.h>
//统计一个整数二进制中1的个数
//int main()
//{
//	int num = 10; //   x 0000 0000 0000 0000 0000 0000 0000 1010
//    int count = 0;// x-1 0000 0000 0000 0000 0000 0000 0000 1001&
//	              //     0000 0000 0000 0000 0000 0000 0000 1000   
//	              //   x 0000 0000 0000 0000 0000 0000 0000 1000 
//	              // x-1 0000 0000 0000 0000 0000 0000 0001 0000&
//	while (num)   //     0000 0000 0000 0000 0000 0000 0000 0000
//	{
//		num = num&(num - 1);//按位与多少次，就有多少个1
//		count++;
//	}
//	printf("二进制中1的个数 %d \n", count);
//	system("pause");
//	return 0;
//}
 
//求两个数二进制中不同位的个数
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？输入例子 :1999 2299 输出例子 : 6
//思路 先将m和n进行按位异或，此时m和n相同的二进制比特位清零，不同的二进制比特位为1
//统计异或完成后结果的二进制比特位中有多少个1即-》转化为求一个数存储在内存中的二进制1的个数

//int num(int i, int j)
//{
//	int count = 0;
//	int tmp = i^j;//^异或操作符 相同则为0，不同为1
//	while (tmp)
//	{
//		count++;
//		tmp = tmp&(tmp - 1);//按位与多少次 就有 多少个1 
//		
//	}
//	return count;
//}
//int main()
//{
//	int i = 1999; //011111001111
//	int j = 2999; //101110110111
//	int result = num(i, j);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//打印整数二进制的奇数位和偶数位。获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}
