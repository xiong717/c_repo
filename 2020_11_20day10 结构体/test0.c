//喝汽水问题 20yuan=20->10->5->2(1)->1(1)->1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
#include<stdio.h>
#include<windows.h>
int main()
{
	int total = 0;
	int money = 1;
	int empty = 0;
	scanf_s("%d", &money);
	total = money;
	empty = money;
	while (empty >1)
	{
		money = empty / 2;
		empty = empty / 2 + empty % 2;
		total += money;
	}
	printf("可以换%d瓶\n", total);
	system("pause");
	return 0;
}
