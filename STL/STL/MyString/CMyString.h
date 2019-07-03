/*
头文件放函数声明
*/

#pragma once
#ifndef _MYSTRING
#define _MYSTRING

#include<iostream>
#include<string>
using namespace std;

class CMyString
{
private:
	char* m_str;
	size_t m_nLenght;
public:
	CMyString();
	CMyString(size_t lenght, char ch);
	CMyString(const char* str);
	CMyString(const char* str, size_t lenght);
	CMyString(CMyString& str, size_t index, size_t lenght);

public:
	const char* c_str() const;  //得到字符串首地址
	const size_t size() const;  //得到字符串的个数
	void SetnLenght(size_t lenght);  //设置字符个数
	char* &GetMStr();            //设置字符串内容


public:
	~CMyString();
};

//输出重载
ostream& operator <<(ostream& os, CMyString& str);

//输入重载
istream& operator >>(istream& is, CMyString& str);


#endif