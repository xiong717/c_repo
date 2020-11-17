#include<stdio.h>
#include<windows.h>


//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
int main()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  //在这里完成代码
  // 分析：因为数组中存储的元素类型是int类型的，因此只要给一个int的指针，依次取索引数组中的每个元素即可
  int* p = arr;  // 数组名代表数组首元素的地址
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
  {
	printf("%d ", *p);   // *p: 取到p所指向位置的元素
	++p;                 // 获取p的下一个位置
  }
	system("pause");
	return 0;
}