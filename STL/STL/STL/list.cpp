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
//	Node(int b, char d)		//���캯�����൱������ʹ��,�ṹ��Ĭ�϶���public
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
////list�Ķ���
////void ListDefine()
////{
////	list<Node> lt(5);   //����һ������Ϊ5���ṹ�������
////	
////	struct Node no(18,'a');		//��ʼ���ṹ��
////	list<Node> lt1(3,no);
////	for_each(lt1.begin(),lt1.end(),fun);
////}
////
////
//////list�Ĵ�С
////void ListSize()
////{
////	Node non(33, 's');
////	list<Node>ls(6,non);	
////	cout << ls.size() << endl;			//��������Ĵ�С
////	cout << ls.empty() << endl;			//�ж������Ƿ���Ԫ�أ��о����0���޾����1
////	for_each(ls.begin(), ls.end(),fun);
////
////	ls.resize(0);						//��������ռ�
////	cout << ls.size() << endl;			//��������Ĵ�С
////	cout << ls.empty() << endl;			//���Ϊ1
////	for_each(ls.begin(), ls.end(),fun);
////}
//
//
////list�������������
//void ListCoutAdd()
//{
//	//struct Node non1(119,'p');
//	//list<Node> ls1(5, non1);			//��������ռ��С��non1
//	//list<Node>::iterator ite = ls1.begin();	//����һ��������ʹ��ָ��ls1��ͷ��ַ
//	////for(ite = ls1.begin(); ite != ls1.end(); ite++)	//ʹ�õ�����ѭ���������for_each�������һ��
//	////{
//	////	cout << ite->a << "  " << ite->c << endl;
//	////}
//	//cout << ls1.back().a << "  " << ls1.back().c << endl;		//������һ��Ԫ��
//	//cout << ls1.front().a << "  " << ls1.front().c << endl;	//�����һ��Ԫ��
//	list<Node>ls;
//	ls.push_back( Node(17, 'q'));		//β���
//	ls.push_front(Node(18, 's'));		//ͷ���
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