
void myqsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
{
	int i, j;
	char * st = (char *)base; //void *������Ӽ�����char *�Ӽ��������ֽ���תΪ1��������ơ�
	char tmp[16]; //���ǵ�long double���ͣ���ʱ�ռ�����16�ֽڱȽϱ���

	for (i = 0; i < nitems - 1; i++)
	{
		for (j = 0; j < nitems - 1 - i; j++) //ð�ݳ���ѭ��ͷ
		{
			if (compar(st + j * size, st + (j + 1) * size)) //�Ƚϵ�ʱ����תע���size
			{
				memcpy(tmp, st + j * size, size); //����������memcpy��ɾͲ�������⡣
				memcpy(st + j * size, st + (j + 1) * size, size);
				memcpy(st + (j + 1) * size, tmp, size);
			}
		}
	}
}

