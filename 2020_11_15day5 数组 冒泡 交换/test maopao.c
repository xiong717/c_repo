#include<stdio.h>
#include<windows.h>
//ʵ��һ�������������ð������
//int BubbleSort(int arr[], int size)
//{
//	//int size=sizeof(arr) / sizeof(arr[0]);����ð�ݷ� ���� ���η�����ά int size=4/4=1;
//	for (int i = 0; i < size - 1; i++)
//	{//size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
//		int j = 0;
//		for (j = 0; j<size - i - 1;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 99, 22, 43, 56, 78, 57, 89, 34, 27, 88 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ��� ʵ�ֺ���init() ��ʼ������Ϊȫ0 ʵ��print()  ��ӡ�����ÿ��Ԫ�� ʵ��reverse() �����������Ԫ�ص����á�
//void print(int arr[],int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int size)
//{
//	int left = 0;
//	int right = size - 1;
//    while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void Init(int arr[], int size, int set)
//{
//	int i = 0;
//	for (i = 0; i<size; i++)
//	{
//		arr[i] = set;
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int set = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr,size);
//	reverse(arr,size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	Init(arr, size, set);
//
//	system("pause");
//	return 0;
//}

////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//    printf("������10������:");
//	for (i = 0; i<10; i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	printf("������10������:");
//	for (i = 0; i<10; i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	����
//	for (i = 0; i<10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for ( i = 0; i< 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	system("pause");
//	return 0;
//}
