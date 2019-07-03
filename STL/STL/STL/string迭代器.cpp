#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

void FunIterator()
{
	string str("abcdefg");
	string::iterator ite;
	ite = str.begin();        //begin()函数返回字符串数组的首地址

	//for(ite; ite != str.end(); ite++)   //end()指向最后一个字符的下一个地址即 '\0'
	//{
	//	*ite = 's';    //也可以对str进行重新赋值
	//	cout << *ite ;
	//}
	/*for(size_t i = 0; i < str.size(); i++)    //打印字符串str
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
	//ite = str.begin();			//上条语句增加了字符串长度，str需要重新申请更大的空间，需要重新指向，否则会出错

	//ite[2] = 's';			//修改第三个字符
	//cout << str ;
}

void TestIterator()
{
	string str("abc");
	string str1("efg");
	string str3("abcdefghi");
	string str4("abcdefgh");
	//str.append(str1.begin(),str1.end());			 //在str后面插入str1   str.append(str1.begin()+几就从第几个开始,str1.begin()+几就从第几个结束)

	//str3.erase(str3.begin()+1, str3.begin()+3);		 //删除字符串中的某些字符，也可以删除某个

	//str4.insert(str4.begin()+2, 3, 'S');						//在str4字符串的第二个字符后面插入三个S
	str4.insert(str4.begin(),str1.begin(),str1.end());			//在开头插入str1的字符串
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
	for_each(str.begin(), str.end(), fun);   //遍历字符串并通过函数打印
	cout << endl;

	sort(str.begin(), str.end());			 //将字母进行排序,默认从小到大
	for_each(str.begin(), str.end(), fun);
	cout << endl;

	sort(str.begin(), str.end(), greater<char>());  //将字母从大到小排序
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