#include<stdio.h>
#include<windows.h>

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