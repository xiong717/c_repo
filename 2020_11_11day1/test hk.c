#include<stdio.h>
#include<windows.h>



//���������������������������Լ��
//int main()
//{
//	int a=20;
//	int b=40;
//	int c=0;
//	//��������Ͳ���ȷ��scanf_s("&d %d",&a,&b);
//	while (a%b!=0)
//	{
//		c = a%b;//շת�����
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d", b);
//	system("pause");
//	return 0;
//}

//��ӡ1000�굽2000��֮������� 4��һ���Ұ��겻��ÿ400������һ��
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//    system("pause");
//	return 0;
//}

//��ӡ100~200֮�������
//int main()
//{
//	int i;
//	int j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	
//	system("pause");
//	return 0;
//}
//�Ż�
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 101; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//    printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i=0;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10== 9))//ǰ���жϸ�λ�Ƿ����9�������ж�ʮλ�Ƿ����9
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	system("pause");
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (flag*1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
////���double����(˫����ʵ��)%lf��ʽ�Լ�float����(������ʵ��)%f��ʽ��Ĭ�����6λС�� 
////Ҫ���nλС������ô������%.nlf�ĸ�ʽ %��10lf ���ʮλС��
//	system("pause");
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 34, 67, 4, 45, 68, 56, 78, 84, 23, 49 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int result = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%d ", i, j, result);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//����ϿεĲ�������Ϸ
//void menu()
//{
//	printf("#######################################\n");
//	printf("####1 play              2 exit   ######\n");
//	printf("#######################################\n");
//}
//void Game()
//{
//	srand((unsigned)time(NULL));
//	int r = rand() % 100 + 1;//��ʾ��Χ�Ǵ�0-100 �κ���ȡģ100����0-99 
//	while (1)
//	{
//		int n = 0;
//		printf("���#");
//		scanf_s("%d", &n);
//		if (n > r)
//		{
//			printf("��´���\n");
//		}
//		else if (n < r)
//		{
//			printf("���С��\n");
//		}
//		else
//		{
//			printf("��¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	
//	while (!quit)
//	{
//		menu();
//		int select = 0;
//		scanf_s("%d", &select);
//		switch (select)
//		{
//		case 1:
//			Game();
//			break;
//		case 2:
//			quit = 1;
//			printf("bye bye\n");
//			break;
//		default:
//			printf("��������������������\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

