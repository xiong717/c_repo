//qsort������ʵ�� ����������

# include <stdio.h>
# include <windows.h>

int intsort(const void *p1, const void *p2)
{
	if (*(float *)p1 > *(float *)p2)     //���������ܱȽ���ȣ����ǿ��ԱȽϴ�С
	{
		return 1;          //�������������У�����-1�ǽ�������
	}
	if (*(float *)p1 < *(float *)p2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float arr[] = { 1, 3, 5, 8, 7, 9, 6 };
	int num = sizeof (arr) / sizeof (arr[0]);
	qsort(arr, num, sizeof (float), intsort);
	system("pause");
	return 0;
}