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
//1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0 2. 以同样的方式提取偶数位置
/*思路检测num中某一位是0还是1的方式：
1. 将num向右移动i位
2. 将移完位之后的结果与1按位与，如果：
结果是0，则第i个比特位是0
结果是非0，则第i个比特位是1*/

//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);//奇数位
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);//偶数位
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int num = 10;
//	Printbit(num);
//	system("pause");
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 5;
//	int b = 6;
//	printf("before:%d %d\n", a, b);
//	a = a^b;//异或 a=5^6
//	b = a^b;//  b=5^6^6=5
//	a = a^b;//  a=5^6^5=6
//	printf("affter:%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//或者 
//int main()
//{
//	int a = 5;
//	int b = 6;
//	printf("before:%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;//有风险有溢出问题
//	printf("affter:%d %d\n", a, b);
//	system("pause");
//	return 0;
//}