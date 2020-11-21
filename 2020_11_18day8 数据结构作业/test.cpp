////2.1将两个递增的有序链表合并为一个递增的有序链表。要求结果链表仍使用原来两个链表的存储空间, 不另外占用其它的存储空间。表中不允许有重复的数据
//#include<stdio.h>
//#include<stdlib.h>
////定义存储结构
//typedef struct {
//	int date;
//}Date;
////单链表的存储结构
//typedef struct LNode {
//	Date elem;
//	struct LNode *next;
//}Lnode, *Linklist;
//
////单链表初始化
//int InitList(Linklist &L)//&L可以直接对L操作，用到的是c++的部分知识，这样不用返回结构体
//{
//	//L = (Linklist)malloc(sizeof(LNode));//c语言开辟空间
//	L = new Lnode;//c++语言开辟空间
//	L->next = NULL;//头节点指针域置为空
//	return 1;//初始化完毕
//}
////后插法创建单链表
//
//void CreateList(Linklist &L, int n)//n为用户要输入的个数
//{
//	Linklist r;//创建尾指针
//	r = L;//指向头结点
//	printf("请输入数字\n");
//	for (int i = 0; i<n; i++)
//	{
//		Linklist p = new LNode;//开辟空间，p为节点
//		//printf("请输入第%d个数字\n", i + 1);
//		scanf_s("%d", &p->elem.date);//别忘取&
//		p->next = NULL;
//		r->next = p;//将新节点插入r之后
//		r = p;//r指向新的尾节点
//	}
//
//}
//void MergeList(Linklist &La, Linklist &Lb, Linklist &Lc)
//{//合并链表La和Lb，合并后的新表使用头指针Lc指向
//	Linklist pa = La->next;  Linklist pb = Lb->next;
//	//pa和pb分别是链表La和Lb的工作指针,初始化为相应链表的第一个结点
//	Linklist pc;
//	Lc = pc = La;  //用La的头结点作为Lc的头结点
//	while (pa && pb)//到任意一个链表的尾节点结束
//	{
//		if (pa->elem.date<pb->elem.date)
//		{
//			pc->next = pa; pc = pa; pa = pa->next;
//		}
//		//取较小者La中的元素，将pa链接在pc的后面，pa指针后移
//		else if (pa->elem.date>pb->elem.date) { pc->next = pb; pc = pb; pb = pb->next; }
//		//取较小者Lb中的元素，将pb链接在pc的后面，pb指针后移
//		else //相等时取La中的元素，删除Lb中的元素
//		{
//			pc->next = pa; pc = pa; pa = pa->next;
//			Linklist q = pb->next; delete pb; pb = q;//free(pb);也可以
//		}
//	}
//	pc->next = pa ? pa : pb;    //插入剩余段
//	delete Lb;            //释放Lb的头结点
//}
////输出数据
//void output(Linklist L)
//{
//	Linklist p = L;
//	p = L->next;
//	while (p)
//	{
//		printf("%d ", p->elem.date);
//		p = p->next;
//	}
//}
//int main()
//{
//	//创建2个链表
//	Linklist La, Lb, Lc;
//	//初始化
//	InitList(La);
//	InitList(Lb);
//	//输入数据
//	int n1, n2;
//	printf("请输入每条链表的个数\n");
//	scanf_s("%d %d", &n1, &n2);
//	printf("请输入第1个链表的数据\n");
//	CreateList(La, n1);
//	printf("请输入第2个链表的数据\n");
//	CreateList(Lb, n2);
//	//调用此函数
//	MergeList(La, Lb, Lc);
//	output(Lc);
//	system("pause");
//	return 0;
//}



//2.6设计一个算法，通过一趟遍历确定长度为n的单链表中值最大的结点
#include <iostream>
using namespace std;
typedef int ElemType;

typedef struct LNode
{
	ElemType data;        //结点的数据域
	struct LNode *next;   //结点的指针域
}LNode, *LinkList;         //LinkList为指向结构体LNode的指针类型

//创建单链表前插法
void CreateList(LinkList &L, int n)
{//逆位序输入n个元素的值，建立带表头结点的单链表L
	L = new LNode;
	L->next = NULL;   //先建立一个带头结点的空链表
	cout << "请输入列表中元素：";

	for (int i = 0; i<n; i++)
	{
		LNode *p;
		p = new LNode;     //生成新结点 *p
		cin >> p->data;    //输入元素赋给新结点的数据域
		p->next = L->next;
		L->next = p;       //将新结点插入到头结点之后
	}
}
//求最大值
void MaxElem(LinkList &L)
{
	LNode *p = L->next;
	int maxElem = p->data;

	while (p != NULL)
	{
		if (p->data > maxElem)
			maxElem = p->data;
		p = p->next;
	}
	cout << "最大结点为：" << maxElem << endl;
}
//输出整个单链表
void display(LinkList L)
{
	LNode *p;
	p = L->next;
	cout << "(";
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << ")" << endl;
}
int main()
{
	int n;
	LNode *L;
	cout << "请输入链表的长度：";
	cin >> n;
	CreateList(L, n);
	display(L);
	MaxElem(L);
	system("pause");
	return 0;
}

//后插法
//#include <iostream>
//using namespace std;
//typedef int Elemtype;
//
//typedef struct LNode
//{
//	Elemtype data; //结点的数据域
//	struct LNode *next;//结点的指针域
//}LNode, *LinkList;   //LinkList为指向结构体LNode的指针类型

////后插法
//void CreateList(LinkList &L, int n)
//{
//	int i;
//	LNode *p; 
//	LNode *r;
//	L = new LNode;
//	L->next = NULL;
//	r = L;
//	for (i = 0; i<n; ++i)
//	{
//		p = new LNode;
//		cin >> p->data;
//		p->next = NULL; r->next = p;
//		r = p;
//	}
//}
////输出整个单链表
//void display(LinkList L)
//{
//	LNode *p;
//	p = L->next;
//	cout << "(";
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << ")" << endl;
//}
////找最大值
//int MaxList(LinkList L, Elemtype &e)
//{
//	LNode *p;
//	p = L->next;
//	e = p->data;
//	while (p->next)
//	{
//		if ((p->next->data)>e)
//			e = p->next->data;
//		p = p->next;
//	}
//	return e;
//}
////主函数
//int main()
//{
//	LinkList L; int n; Elemtype e; int max;
//
//	cout << "请输入需要创建单链表A的长度：" << endl;
//	cin >> n;
//	cout << "请依次输入需要存入的数据(后插法)：" << endl;
//	CreateList(L, n);
//
//	cout << "单链表L为：";
//	display(L);
//    max = MaxList(L, e);
//	cout << "最大值为：" << max << endl;
//	system("pause");
//	return 0;
//}


