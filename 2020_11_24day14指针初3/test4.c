//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	int num = 0;
	
	for (num = 0; num <= 1000; num++)
	{ 
		int sum = 0;
		int count = 1;
		int a = num;
		int b = num;
		while (a / 10)
		{
			count++;
			a = a / 10;
		}
		for (int i = 0; i < count; i++)
		{
			sum += pow(b% 10, count);
			b = b / 10;
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
	system("pause");
	return 0;
}

//�������
int main()
{
	int i = 0;
	for (i = 0; i <= 1000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. ���ж����ֵ�λ��
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. ����ÿһλ�Ĵη���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. �ж�
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}
////�����㷨
//int main()
//{
//	int a, b, c, x, i;
//	for (x = 100; x <= 999; x++)
//	{
//		c = x % 10;
//		b = x / 10 % 10;
//		a = x / 100;
//		i = i + 1;
//		if (x == c*c*c + b*b*b + a*a*a)
//		{
//			printf("%d\n", x);
//		}
//	}
//	return 0;
//}