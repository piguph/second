#include<iostream>
#include<string>
#include<cctype>
using namespace std;


void StrCout()
{
	string str1("qwerashj");
	cout << str1 << endl;
	cout << str1.c_str() << endl;
	cout << str1[1] << endl;
	try
	{
		str1.at(8);      //抛出一个 out of rang
	}
	catch(...)
	{
		cout << "访问越界了" << endl;
	}
}

void StrChange()      //修改字符串中的某个字符
{
	string str2("abcdefg");
	//str2[3] = 's';
	//str2.at(0) = 'b';
	//cout << str2 << endl;
	
	string str3("bcdef");
	//str2.insert(2,str3,0,3);   //将str3中的前三个字符插到str2第二个字符后面'
	//str2.insert(3,3,'s');		 //在str2的第三个字符后插入三个s
	//str2.insert(str2.length(), 3, 's');  //在str2尾部插入三个s

	//str2 += str3;				//将str3接到str2中

	//str2 += "qwe";				//将字符串qwe接到str2字符串尾部后

	//str2.append(str3);				//在str2尾部插入str3的字符串

	//str2.append("sqwerty", 3);		//将字符串中的前三个字符接到str2尾部后面

	//str2.append(3, 's');				//将三个s接到str2的尾部

	//str2.assign("ashxs", 3);			//将字符串中的前三个字符赋值给str2

	//str2.assign("ajkgvcxb", 2, 5);		//中间第几个到第几个赋值给str2

	//str2.erase(2,3);						//把str2字符串中的第二和第三个字符删除  str2.erase(0,str2.lenght())全部删除

	//cout << (str2 < str3) << endl;			//重载比较运算符，真为1假为0  

	//从第一个不相等的字符比起，看谁大（abc<adc）
	//int result;
	//result = str2.compare(str3);			//compare比较，大于返回1，等于返回0，小于返回-1
	//cout << result << endl;

	//cout << str2.compare("abcde") << endl;  //输出1

	//char arrStr[20] = {0};
	//str2.copy(arrStr, 4, 2);				//复制str2中的某段字符串copy（复制到哪，复制几个字符，从第几个开始复制）
	//cout << arrStr << endl;

	//cout << (int)str2.find('g',2) << endl;  //从str2中查找子串str3，（需要查找的子串，从第几个开始查找）有就返回1，没有就返回-1（没有强制转换int就返回-1的补码）
											//若是查找字符则返回字符的下标

	//cout << str2.substr(2,4) << endl;		//（从第几个，到第几个）返回查找的子串

	str2.swap(str3);						//交换str2与str3
	cout << str2 << endl;
	cout << str3 << endl;
}




/*int main()
{

	StrChange();  */      //修改字符串中的某个字符
	//StrCout();



	//string str;
	//str = "cccccccc";
	//string str1(str);
	//string str2("aaaaaaaaa");
	//string str3(10, 'd');
	//cout << str1 << endl;    //str1.c_str()与str1效果一样，前者是调用了c_str()函数
	//cout << str2 << endl;
	//cout << str3 << endl;

	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;*/

	/*string word;
	while(cin >> word)
	{
		cout << word << endl;
	}*/

	//string line;
	//string line1;
	//getline(cin, line);  //读取一整行，包括空格符
	//getline(cin,line1);
	//cout << line << endl;
	//cout << line1 << endl;


	//int result;
	//string line;
	//while(getline(cin, line))
	//{
	//	if(!line.empty())
	//	{
	//		cout << line << endl;
	//	}
	//	result = line.empty();    //有一个返回值，空为1
	//	cout << result << endl;
	//}

	
	//string line;
	//while(getline(cin,line))
	//{
	//	if(line.size() > 10)       //输出超过十个字符的行
	//		cout << line << endl;
	//}

	//string str1 = "Hello,";
	//string str2 = "World";
	//string str3;
	//str3 = str1 + str2 ;    //输出Hello,World
	//cout << str3 << endl;

	/*string str1, str2,str3;
	getline(cin, str1);
	getline(cin,str2);
	if(str1 > str2)
		cout << str1 << endl;
		
	if(str1 < str2)
		cout << str2 << endl;*/

	
	
	/*system("pause");
	return 0;
}*/