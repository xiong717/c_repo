//.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<windows.h>

int main()
{
	int a = 0;
	int sum = 0;
	int n = 0;
	int tmp = 0;
	scanf_s("%d,%d",&a,&n);
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum = sum + tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}