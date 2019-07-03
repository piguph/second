#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>	
using namespace std;

void STLConstructor()
{
	vector<int> vec2(5,12);          //5个12
	vector<int>::iterator ite ;
	ite = vec2.begin();
	ite = vec2.end();
	vector<int> vec(vec2.begin(),vec2.end());
	for(int i = 0; i < 5; i++)
	{
		cout << vec2[i] << endl;
	}
}


void fun(int i)
{
	cout << i  << endl;			//可以直接输出也可以进行操作
}


void STLCapacity()
{
	vector<int> vec;
	vector<int> vec1(5);					//申请5个空间

	vec1.resize(4);							//增加空间有效元素，但空间容量不会改变

	//vec1.reserve(10);						//增加空间容量，但元素有效个数没有改变仍是5
	cout << vec1.size() << endl;			//输出有效元素的个数，输出仍是5

	//cout << vec1.capacity() << endl;

	vec1.push_back(1);						//现有空间大小为：5+5/2 = 7  （此条语句是在上面reserve()函数没有出现的情况下测试的）
	//cout << vec1.capacity() << endl;

	vec1.push_back(1);						//这里是七个空间，刚好
	vec1.push_back(10);						//空间不够，需要重新申请（7+7/2）= 10
	//cout << vec1.capacity() << endl;		//10

	for_each(vec1.begin(), vec1.end(), fun);

	//cout << vec1.empty() << endl;			//测试该容器有没有元素，有就返回0，没有返回1
	//cout << vec.empty() << endl;			//vec是空容器，输出1
}



//输出元素
void STLFun()
{
	vector<int> vec;
	for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		//cout << vec[i] << endl;
		//cout << vec.at(i) << endl;		//两条都是输出所有元素
	}
	 
	////定义迭代器并输出所有元素
	//vector<int> ::iterator ite = vec.begin();
	//for(ite; ite != vec.end(); ite++)
	//{
	//	cout << *ite << endl;
	//}

	//用for_each()进行输出
	for_each(vec.begin(), vec.end(), fun);   //函数只写函数名即函数地址

	//cout << vec[3] << endl;				//输出某个元素
	//cout << vec.back() << endl;			//返回最后一个元素
}

//插入元素
void STLInsert()
{
	vector<int> vec;

	for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);					//次函数作用是在末尾插入一个元素(i是元素的值)
	}
	
	/*for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	vector<int>::iterator ite = vec.begin();  //为什么当这条语句放到这条vector<int> vec定义语句下面程序会崩溃
	for(ite; ite != vec.end(); ite++)
	{
		cout << *ite << endl;
	}*/

	//vec.insert(vec.begin()+3, 3, 12);		//在数组的第三个元素后插入三个12
	////vec.insert(vec.begin()+4,33);			//在数组的第四个元素后插入33

	vector<int> vec1(3,1);					//给容器赋值3个1
	//vec.insert(vec.begin()+2, vec1.begin(),vec1.end());		//(在第二个位置后插入另一个容器的数组)

	//vec.pop_back();								//删除末尾的一个元素，调用一次删除一次
	//vec.pop_back();
	

	vec.swap(vec1);									//交换连个容器的内容
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
	for_each(vec1.begin(),vec1.end(),fun);
}

void STLSort()
{
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(1);
	vec.push_back(9);
	vec.push_back(7);
	sort(vec.begin(), vec.end());			//从小到大排序
	for_each(vec.begin(),vec.end(),fun);
	cout << endl;
	sort(vec.begin(), vec.end(), greater<int>());	//从大到小排序
	for_each(vec.begin(),vec.end(),fun);

	//随机排序
	cout << endl;
	srand((unsigned int)time(0));
	random_shuffle(vec.begin(), vec.end());			//随机打印
	for_each(vec.begin(), vec.end(), fun);

}


//int main()
//{
//	STLConstructor();
//	STLCapacity();			//vector的容量
//	STLFun();					//输出vector的元素
//	STLInsert();
//	STLSort();
//	system("pause");
//	return 0;
//}