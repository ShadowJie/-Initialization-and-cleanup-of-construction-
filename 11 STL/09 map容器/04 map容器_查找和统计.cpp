#include<iostream>
using namespace std;
#include<map>

//map���� ���Һ�ͳ��

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

//��С
void test01()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = m.count(3);	//Ҫô��0 Ҫô��1
	cout << "num = " << num << endl;


}

int main()
{

	test01();

	//test02();

	system("pause");

	return 0;
}