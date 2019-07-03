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


//赋值的封装函数
CMyString::CMyString(const char* str)
{
	const char* pStr = str;
	int nCount = 0;
	//得到数组长度
	while(*pStr != '\0')
	{
		nCount++;
		pStr++;
	}
	//申请空间
	m_str = new char[nCount+1];
	//参数赋值
	for(int i = 0; i < nCount+1; i++)
	{
		m_str[i] = str[i];
	}
}


//输出字符串中的前几个字符，包括字符
CMyString::CMyString(const char* str, size_t lenght)
{
	m_str = new char[lenght+1];
	for(size_t i = 0; i < lenght; i++)
	{
		m_str[i] = str[i];
	}
	m_str[lenght] = '\0';
}

//从某个字符开始打印连续的字符到某几个结束
CMyString::CMyString(CMyString& str, size_t index, size_t lenght)
{
	m_str = new char(lenght-index+1);
	for(size_t i = index, j = 0; i < lenght; i++, j++)
	{
		m_str[j] = str.c_str()[i];
	}
	m_str[lenght - index] = '\0';
}

//输出重载
ostream& operator <<(ostream& os, CMyString& str)
{
	os << str.c_str();
	return os;
}

//输入重载
istream& operator >>(istream& is, CMyString& str)
{
	char arr[20] = {0};
	is >> arr;
	//计算字符串长度
	int i;
	for(i = 0; i != '\0'; i++);
	delete[] str.c_str();   //释放空间

	str.GetMStr() = new char[i+1];
	//赋值
	int j = 0;
	for(j = 0; j <= i; j++)
	{
		str.GetMStr()[j] = arr[j];
	}
	
	str.SetnLenght(i);    //
	
	return is;
}

//设置字符串内容
char* & CMyString:: GetMStr()
{
	return m_str;
}


 //设置字符个数
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

