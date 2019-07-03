#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>	
using namespace std;

void STLConstructor()
{
	vector<int> vec2(5,12);          //5��12
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
	cout << i  << endl;			//����ֱ�����Ҳ���Խ��в���
}


void STLCapacity()
{
	vector<int> vec;
	vector<int> vec1(5);					//����5���ռ�

	vec1.resize(4);							//���ӿռ���ЧԪ�أ����ռ���������ı�

	//vec1.reserve(10);						//���ӿռ���������Ԫ����Ч����û�иı�����5
	cout << vec1.size() << endl;			//�����ЧԪ�صĸ������������5

	//cout << vec1.capacity() << endl;

	vec1.push_back(1);						//���пռ��СΪ��5+5/2 = 7  �����������������reserve()����û�г��ֵ�����²��Եģ�
	//cout << vec1.capacity() << endl;

	vec1.push_back(1);						//�������߸��ռ䣬�պ�
	vec1.push_back(10);						//�ռ䲻������Ҫ�������루7+7/2��= 10
	//cout << vec1.capacity() << endl;		//10

	for_each(vec1.begin(), vec1.end(), fun);

	//cout << vec1.empty() << endl;			//���Ը�������û��Ԫ�أ��оͷ���0��û�з���1
	//cout << vec.empty() << endl;			//vec�ǿ����������1
}



//���Ԫ��
void STLFun()
{
	vector<int> vec;
	for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		//cout << vec[i] << endl;
		//cout << vec.at(i) << endl;		//���������������Ԫ��
	}
	 
	////������������������Ԫ��
	//vector<int> ::iterator ite = vec.begin();
	//for(ite; ite != vec.end(); ite++)
	//{
	//	cout << *ite << endl;
	//}

	//��for_each()�������
	for_each(vec.begin(), vec.end(), fun);   //����ֻд��������������ַ

	//cout << vec[3] << endl;				//���ĳ��Ԫ��
	//cout << vec.back() << endl;			//�������һ��Ԫ��
}

//����Ԫ��
void STLInsert()
{
	vector<int> vec;

	for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);					//�κ�����������ĩβ����һ��Ԫ��(i��Ԫ�ص�ֵ)
	}
	
	/*for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	vector<int>::iterator ite = vec.begin();  //Ϊʲô���������ŵ�����vector<int> vec������������������
	for(ite; ite != vec.end(); ite++)
	{
		cout << *ite << endl;
	}*/

	//vec.insert(vec.begin()+3, 3, 12);		//������ĵ�����Ԫ�غ��������12
	////vec.insert(vec.begin()+4,33);			//������ĵ��ĸ�Ԫ�غ����33

	vector<int> vec1(3,1);					//��������ֵ3��1
	//vec.insert(vec.begin()+2, vec1.begin(),vec1.end());		//(�ڵڶ���λ�ú������һ������������)

	//vec.pop_back();								//ɾ��ĩβ��һ��Ԫ�أ�����һ��ɾ��һ��
	//vec.pop_back();
	

	vec.swap(vec1);									//������������������
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
	sort(vec.begin(), vec.end());			//��С��������
	for_each(vec.begin(),vec.end(),fun);
	cout << endl;
	sort(vec.begin(), vec.end(), greater<int>());	//�Ӵ�С����
	for_each(vec.begin(),vec.end(),fun);

	//�������
	cout << endl;
	srand((unsigned int)time(0));
	random_shuffle(vec.begin(), vec.end());			//�����ӡ
	for_each(vec.begin(), vec.end(), fun);

}


//int main()
//{
//	STLConstructor();
//	STLCapacity();			//vector������
//	STLFun();					//���vector��Ԫ��
//	STLInsert();
//	STLSort();
//	system("pause");
//	return 0;
//}