#include "CMyString.h"

int main()
{
	CMyString str;
	CMyString str1(5, 'q');
	//cout << str1.c_str() << endl;

	CMyString str2("shjacyuvabh");
	//cout << str2.c_str() << endl;

	CMyString str3("shdbhjsbvc", 5);
	//cout << str3.c_str() << endl;

	CMyString str4(str3,2,5);
	//cout << str4.c_str() << endl;

	//cout << str2 << endl;

	CMyString str6("sjhdc");
	cout << str6 ;
	cin >> str6;
	cout << str6 ;

	system("pause");
	return 0;
}