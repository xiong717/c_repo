#include<stdio.h>
#include<windows.h>
//实现一个对整形数组的冒泡排序
//int BubbleSort(int arr[], int size)
//{
//	//int size=sizeof(arr) / sizeof(arr[0]);错误冒泡法 数组 传参发生降维 int size=4/4=1;
//	for (int i = 0; i < size - 1; i++)
//	{//size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
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

//创建一个整形数组，完成对数组的操作 实现函数init() 初始化数组为全0 实现print()  打印数组的每个元素 实现reverse() 函数完成数组元素的逆置。
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

////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//    printf("请输入10个数字:");
//	for (i = 0; i<10; i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:");
//	for (i = 0; i<10; i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	交换
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
