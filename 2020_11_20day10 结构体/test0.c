//����ˮ���� 20yuan=20->10->5->2(1)->1(1)->1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
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
	printf("���Ի�%dƿ\n", total);
	system("pause");
	return 0;
}