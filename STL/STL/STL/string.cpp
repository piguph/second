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
		str1.at(8);      //�׳�һ�� out of rang
	}
	catch(...)
	{
		cout << "����Խ����" << endl;
	}
}

void StrChange()      //�޸��ַ����е�ĳ���ַ�
{
	string str2("abcdefg");
	//str2[3] = 's';
	//str2.at(0) = 'b';
	//cout << str2 << endl;
	
	string str3("bcdef");
	//str2.insert(2,str3,0,3);   //��str3�е�ǰ�����ַ��嵽str2�ڶ����ַ�����'
	//str2.insert(3,3,'s');		 //��str2�ĵ������ַ����������s
	//str2.insert(str2.length(), 3, 's');  //��str2β����������s

	//str2 += str3;				//��str3�ӵ�str2��

	//str2 += "qwe";				//���ַ���qwe�ӵ�str2�ַ���β����

	//str2.append(str3);				//��str2β������str3���ַ���

	//str2.append("sqwerty", 3);		//���ַ����е�ǰ�����ַ��ӵ�str2β������

	//str2.append(3, 's');				//������s�ӵ�str2��β��

	//str2.assign("ashxs", 3);			//���ַ����е�ǰ�����ַ���ֵ��str2

	//str2.assign("ajkgvcxb", 2, 5);		//�м�ڼ������ڼ�����ֵ��str2

	//str2.erase(2,3);						//��str2�ַ����еĵڶ��͵������ַ�ɾ��  str2.erase(0,str2.lenght())ȫ��ɾ��

	//cout << (str2 < str3) << endl;			//���رȽ����������Ϊ1��Ϊ0  

	//�ӵ�һ������ȵ��ַ����𣬿�˭��abc<adc��
	//int result;
	//result = str2.compare(str3);			//compare�Ƚϣ����ڷ���1�����ڷ���0��С�ڷ���-1
	//cout << result << endl;

	//cout << str2.compare("abcde") << endl;  //���1

	//char arrStr[20] = {0};
	//str2.copy(arrStr, 4, 2);				//����str2�е�ĳ���ַ���copy�����Ƶ��ģ����Ƽ����ַ����ӵڼ�����ʼ���ƣ�
	//cout << arrStr << endl;

	//cout << (int)str2.find('g',2) << endl;  //��str2�в����Ӵ�str3������Ҫ���ҵ��Ӵ����ӵڼ�����ʼ���ң��оͷ���1��û�оͷ���-1��û��ǿ��ת��int�ͷ���-1�Ĳ��룩
											//���ǲ����ַ��򷵻��ַ����±�

	//cout << str2.substr(2,4) << endl;		//���ӵڼ��������ڼ��������ز��ҵ��Ӵ�

	str2.swap(str3);						//����str2��str3
	cout << str2 << endl;
	cout << str3 << endl;
}




/*int main()
{

	StrChange();  */      //�޸��ַ����е�ĳ���ַ�
	//StrCout();



	//string str;
	//str = "cccccccc";
	//string str1(str);
	//string str2("aaaaaaaaa");
	//string str3(10, 'd');
	//cout << str1 << endl;    //str1.c_str()��str1Ч��һ����ǰ���ǵ�����c_str()����
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
	//getline(cin, line);  //��ȡһ���У������ո��
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
	//	result = line.empty();    //��һ������ֵ����Ϊ1
	//	cout << result << endl;
	//}

	
	//string line;
	//while(getline(cin,line))
	//{
	//	if(line.size() > 10)       //�������ʮ���ַ�����
	//		cout << line << endl;
	//}

	//string str1 = "Hello,";
	//string str2 = "World";
	//string str3;
	//str3 = str1 + str2 ;    //���Hello,World
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