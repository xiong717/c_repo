#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#if 0
int main()
{
	//���1-100֮�������
	/*int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf(" %d",i);
		}
	}*/
	//����1-5 ���weekday ����6-7 ���weekend
	/*int day;
	printf("��������");
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;

	}*/
//	int n = 1; 
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3,n=1
//	case 2:
//		n++;//m=3,n=2
//	case 3:
//		switch (n)
//		{//switch�������Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;//m=4,n=3
//			break;//�������switch���
//		}
//	case 4:
//		m++;//m=3,n=3
//		break;//�������
//	default://switch���ʽ��ֵ����ƥ������case��ǩ��ֵʱ��ִ��default�Ӿ��������
//		//ÿ��switch�����ֻ�ܳ���һ��default�Ӿ䡣 ���������Գ���������б���κ�λ��
//		break;
//}
//	printf("m=%d,n=%d", m, n);
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0/*��ֵ-�ж� ����0Ϊ��*/; i++, k++)
//		k++;
////ѭ�����ٴΣ�0�Σ�
	//int k = 0;
	//for (;k=0;)//�˴�k�Ǹ�ֵ-�ж�k��ֵ Ϊ1���棬ִ�� Ϊ0�Ǽ�
	//{
	//	printf("hello\n");
	//}
	 system("pause");
	return 0;
}
#endif 
//����n�Ľ׳�
/*int main()
{
	int i;
	int result = 1;
	printf("����һ����");
	scanf_s("%d", &i);
	for (i; i >= 1; i--)
	{
		result *= i;
	}
	printf("result=%d\n", result);
	system("pause");
	return 0;
}*/
/*int Fact(int i)
{
	int result = 1;
	for (i; i>= 1;i--)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int n;
	scanf_s("%d",&n);
	int result = Fact(n);
	printf("result=%d\n",result);
	system("pause");
	return 0;
}*/
//���� 1!+ 2!+ 3!+ ���� + 10!
/*int sum(int n)
{
	int i = 1;
	for (n ; n >= 1; n--)
	{
		i *= n;
	}
	return i ;
}
int main()
{
	int n = 3;
	int result=0 ;
	for (n; n >= 1; n--)
	{
		result += sum(n);
	}
	printf("result=%d", result);
	system("pause");
	return 0;
}*/
/*int Fact(int n)
{
	int result = 1;
	for (int i = n; i >= 1; i--)
	{
		result *= i;
	}
	return result;
}

int FactSum(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += Fact(i);
	}
	return sum;
}
int main()
{
	int start = 1;
	int end = 10;
	int total = FactSum(start, end);
	printf("%d\n", total);
	system("pause");
	return 0;
}*/
//�����򣨴�С���������������ĳ������n
//���ֲ��ҷ� �ҵ��˷����±꣬�Ҳ�������-1
//#define NOT_FOUND -1
//int BinSearch(int arr[], int num,int target)
//{
//	int start = 0;
//	int end = num-1;
//	while (start<=end)
//	{
//		int mid = (end + start) / 2;//Ҫ�������
//		if (target<arr[mid]){
//			end = mid - 1;
//		}
//		else if (target>arr[mid]){
//			start = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int target=44;
//	printf("����Ҫ���ҵ�����");
//	scanf_s("%d", &target);
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int index = BinSearch(arr, num,target);//���ú���
//	printf("index=%d", index);
//	system("pause");
//	return 0;
//}
//��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	while (left <= right){
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\r", arr2);
//		// /r �س����ص���ǰ�еĿ��ˣ� \n�س�����
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ�������������룬����ȷ���¼�ɹ������˳�����

//#define NAME "TOM"
//#define PASSWD "12345"
//
//int Login(int times)
//	{
//		int ret = -1;
//		char name[64];
//		char passwd[64];
//		do{
//			printf("����������˺�#");
//			scanf_s("%s", name);
//			printf("�������������#");
//			scanf_s("%s", passwd);
//			if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
////strcmp�Ƚ������ַ�����strcmp(str1,str2)����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
//				ret = 1;
//				break;
//			}
//			else{
//				times--;
//				printf("�㻹��%d�λ���!\n", times);
//				if (times == 0){
//					printf("������˼����Ҫ��%d����ܳ���\n", 3);
//					Sleep(3000);
//					times = 3;
//				}
//			}
//
//
//		} while (1);
//		return ret;
//	}
//int main()
//{
//	int times = 3;
//	int result = Login(times);
//	if (1 == result)
//	{
//		printf("��¼�ɹ�");
//	}
//	else
//		printf("��¼ʧ��");
//	system("pause");
//	return 0;
//}

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




























