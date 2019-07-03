#include "CMyString.h"

CMyString::	CMyString()
{
	m_str = new char('\0');
}

CMyString::CMyString(size_t lenght, char ch)
{
	m_str = new char[lenght+1];
	for(size_t  i = 0; i < lenght; i++)
	{
		m_str[i] = ch;
	}
	m_str[lenght] = '\0';
}


//��ֵ�ķ�װ����
CMyString::CMyString(const char* str)
{
	const char* pStr = str;
	int nCount = 0;
	//�õ����鳤��
	while(*pStr != '\0')
	{
		nCount++;
		pStr++;
	}
	//����ռ�
	m_str = new char[nCount+1];
	//������ֵ
	for(int i = 0; i < nCount+1; i++)
	{
		m_str[i] = str[i];
	}
}


//����ַ����е�ǰ�����ַ��������ַ�
CMyString::CMyString(const char* str, size_t lenght)
{
	m_str = new char[lenght+1];
	for(size_t i = 0; i < lenght; i++)
	{
		m_str[i] = str[i];
	}
	m_str[lenght] = '\0';
}

//��ĳ���ַ���ʼ��ӡ�������ַ���ĳ��������
CMyString::CMyString(CMyString& str, size_t index, size_t lenght)
{
	m_str = new char(lenght-index+1);
	for(size_t i = index, j = 0; i < lenght; i++, j++)
	{
		m_str[j] = str.c_str()[i];
	}
	m_str[lenght - index] = '\0';
}

//�������
ostream& operator <<(ostream& os, CMyString& str)
{
	os << str.c_str();
	return os;
}

//��������
istream& operator >>(istream& is, CMyString& str)
{
	char arr[20] = {0};
	is >> arr;
	//�����ַ�������
	int i;
	for(i = 0; i != '\0'; i++);
	delete[] str.c_str();   //�ͷſռ�

	str.GetMStr() = new char[i+1];
	//��ֵ
	int j = 0;
	for(j = 0; j <= i; j++)
	{
		str.GetMStr()[j] = arr[j];
	}
	
	str.SetnLenght(i);    //
	
	return is;
}

//�����ַ�������
char* & CMyString:: GetMStr()
{
	return m_str;
}


 //�����ַ�����
void CMyString::SetnLenght(size_t lenght)
{
	m_nLenght = lenght;	
}
const char* CMyString::c_str() const
{
	return m_str;
}


CMyString::~CMyString()
{
	if(NULL != m_str  )
	{
		delete []m_str;
	}
}

