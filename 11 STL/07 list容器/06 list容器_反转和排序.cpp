#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//list���� ��ת������

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	//����	���õ�һ���� > �ڶ�����
	return val1 > val2;
}

void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);


	//��ת������Ԫ��
	L1.reverse();
	printList(L1);

	//����

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	//sort(L1.begin(), L1.end());
	printList(L1);

	L1.sort(); //Ĭ�ϵ�������� ��С����
	printList(L1);

	L1.sort(myCompare); //ָ�����򣬴Ӵ�С
	printList(L1);
	
}

int main()
{
	test01();

	system("pause");

	return 0;
}