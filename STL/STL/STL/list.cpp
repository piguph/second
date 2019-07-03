//#include <iostream>
//#include <iomanip>
//#include <algorithm>
//#include <list>
//#include<string>
//#include<cstdlib>
//using namespace std;
//
//struct Node
//{
//	int a;
//	char c;
//	Node(int b, char d)		//构造函数，相当于类来使用,结构体默认都是public
//	{
//		a = b;
//		c = d;
//	}
//};
//
//void fun(Node &d)
//{
//	cout << d.a << "  " << d.c << "\n";
//}
//
////list的定义
////void ListDefine()
////{
////	list<Node> lt(5);   //定义一个容量为5个结构体的容器
////	
////	struct Node no(18,'a');		//初始化结构体
////	list<Node> lt1(3,no);
////	for_each(lt1.begin(),lt1.end(),fun);
////}
////
////
//////list的大小
////void ListSize()
////{
////	Node non(33, 's');
////	list<Node>ls(6,non);	
////	cout << ls.size() << endl;			//输出容器的大小
////	cout << ls.empty() << endl;			//判断容器是否有元素，有就输出0，无就输出1
////	for_each(ls.begin(), ls.end(),fun);
////
////	ls.resize(0);						//重新申请空间
////	cout << ls.size() << endl;			//输出容器的大小
////	cout << ls.empty() << endl;			//输出为1
////	for_each(ls.begin(), ls.end(),fun);
////}
//
//
////list容器的输出增加
//void ListCoutAdd()
//{
//	//struct Node non1(119,'p');
//	//list<Node> ls1(5, non1);			//申请五个空间大小的non1
//	//list<Node>::iterator ite = ls1.begin();	//定义一个迭代器使他指向ls1的头地址
//	////for(ite = ls1.begin(); ite != ls1.end(); ite++)	//使用迭代器循环输出，与for_each输出功能一样
//	////{
//	////	cout << ite->a << "  " << ite->c << endl;
//	////}
//	//cout << ls1.back().a << "  " << ls1.back().c << endl;		//输出最后一个元素
//	//cout << ls1.front().a << "  " << ls1.front().c << endl;	//输出第一个元素
//	list<Node>ls;
//	ls.push_back( Node(17, 'q'));		//尾添加
//	ls.push_front(Node(18, 's'));		//头添加
//	ls.push_back( Node(19, 'a'));
//
//	list<Node>::iterator ite = ls.begin();
//	ite++;
//	ls.insert(ite,Node(20,'w'));
//	for_each(ls.begin(),ls.end(),fun);
//}
//
//int main()
//{
//	//ListDefine();
//	//ListSize();
//	ListCoutAdd();
//	system("pause");
//	return 0;
//}