#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

void FunIterator()
{
	string str("abcdefg");
	string::iterator ite;
	ite = str.begin();        //begin()���������ַ���������׵�ַ

	//for(ite; ite != str.end(); ite++)   //end()ָ�����һ���ַ�����һ����ַ�� '\0'
	//{
	//	*ite = 's';    //Ҳ���Զ�str�������¸�ֵ
	//	cout << *ite ;
	//}
	/*for(size_t i = 0; i < str.size(); i++)    //��ӡ�ַ���str
	{
		cout << *ite;
		ite++;
	}*/
	/*for(size_t i = 0; i < str.size(); i++)
	{
		cout << ite[i] ;
	}
	cout << endl;*/

	//str.append(20, 's');
	//ite = str.begin();			//��������������ַ������ȣ�str��Ҫ�����������Ŀռ䣬��Ҫ����ָ�򣬷�������

	//ite[2] = 's';			//�޸ĵ������ַ�
	//cout << str ;
}

void TestIterator()
{
	string str("abc");
	string str1("efg");
	string str3("abcdefghi");
	string str4("abcdefgh");
	//str.append(str1.begin(),str1.end());			 //��str�������str1   str.append(str1.begin()+���ʹӵڼ�����ʼ,str1.begin()+���ʹӵڼ�������)

	//str3.erase(str3.begin()+1, str3.begin()+3);		 //ɾ���ַ����е�ĳЩ�ַ���Ҳ����ɾ��ĳ��

	//str4.insert(str4.begin()+2, 3, 'S');						//��str4�ַ����ĵڶ����ַ������������S
	str4.insert(str4.begin(),str1.begin(),str1.end());			//�ڿ�ͷ����str1���ַ���
	//cout << str ;
	cout << str4;
}

void fun(char c)
{
	cout << c;
}

void FunForEach()
{
	string str("qwefvcayx");
	for_each(str.begin(), str.end(), fun);   //�����ַ�����ͨ��������ӡ
	cout << endl;

	sort(str.begin(), str.end());			 //����ĸ��������,Ĭ�ϴ�С����
	for_each(str.begin(), str.end(), fun);
	cout << endl;

	sort(str.begin(), str.end(), greater<char>());  //����ĸ�Ӵ�С����
	for_each(str.begin(), str.end(), fun);

}


//
//int main()
//{
//	//FunIterator();
//	//TestIterator();
//	FunForEach();
//
//	system("pause");
//	return 0;
//}