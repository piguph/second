/*
ͷ�ļ��ź�������
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
	const char* c_str() const;  //�õ��ַ����׵�ַ
	const size_t size() const;  //�õ��ַ����ĸ���
	void SetnLenght(size_t lenght);  //�����ַ�����
	char* &GetMStr();            //�����ַ�������


public:
	~CMyString();
};

//�������
ostream& operator <<(ostream& os, CMyString& str);

//��������
istream& operator >>(istream& is, CMyString& str);


#endif