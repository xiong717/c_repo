/*�������
����Ļ�ϴ�ӡ������ǡ�
1     arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]
1 1
1 2 1
1 3 3 1*/
#include<stdio.h>
#include<windows.h>

int main()
{
	int n = 1;
	int arr[30][30] = {0};
	arr[0][0] = 1;
	printf("����������");
	scanf_s("%d", &n);
	int i, j;
		for (i = 1; i < n; i++)
		{
			arr[i][0] = 1;
			for (j = 1; j <= i; j++)
			{
				if (i = j)
				{
					arr[i][j] = 1;
				}
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	system("pause");
	return 0;
} 

//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //��һ��ֱ����ã���������
//	int i, j;
//	for (i = 1; i < n; i++) //�ӵڶ��п�ʼ��
//	{
//		data[i][0] = 1; //ÿ�еĵ�һ�ж�û������ֱ�Ӹ�1����֤����Խ�硣
//		for (j = 1; j <= i; j++) //�ӵڶ��п�ʼ��
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //���Ʒ���
//		}
//	}
//
//	for (i = 0; i < n; i++) //�����ӡ
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int n = 1;
//	int arr[30][30] = {0};
//	scanf_s("%d", &n);
//	yangHuiTriangle(n);
//	system("pause");
//	return 0;
//}
