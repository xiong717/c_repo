#include <stdio.h>
#include <windows.h>
#include <math.h>

//int IsPrime(int n)
//{
//	int top = (int)sqrt(n);//ǿת����
//  //sqrt������ ͷ�ļ� math.h   sqrt������double
//	for (int i = 2; i <=top; i++)
//		{
//			if (n%i == 0)
//			    return 0;
//			else 
//				return 1;
//		}
//}
//int main()
//{
//	//ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮�������
//	for (int i = 100; i <= 200; i++)
//	{
//		//1 -> yes, 0-> no
//		int ret = IsPrime(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//�����ж�year�ǲ������ꡣ
//int LeapYear(int i)
//{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//}
//int main()
//{
//	int year=1;
//	scanf_s("%d", &year);
//	int ret = LeapYear(year);
//		if (1 == ret)
//		{
//			printf("������");
//		}
//		else
//			printf("��������");
//		system("pause");
//	return 0;
//}

//ʵ��һ��������������������������
//void change(int *i, int *j)
//{
//	int a = *j;//�õ���ָ��
//	*j = *i;
//	*i = a;
//}
//int main()
//{
//	int m = 10;
//	int n = 20;
//	printf("%d %d\n", m, n);
//	change(&m, &n);
//	printf("%d %d\n", m, n);
//	system("pause");
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//void MultiplicationTable(int row)
//{
//	for (int i = 1; i <= row; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int row = 0;
//	int col = 0;
//	row = col;
//	scanf_s("%d", &row);
//	MultiplicationTable (row);
//	system("pause");
//	return 0;
//}





