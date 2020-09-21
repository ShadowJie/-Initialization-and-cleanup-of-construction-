#include<iostream>
using namespace std;
#include<map>

//map���� �����ɾ��

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

	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, int>(1, 10));

	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));

	//�����ֲ��뷽ʽ
	m.insert(map<int, int>::value_type(3, 30));

	//�����ֲ��뷽ʽ	������ʹ�ã���;����������key���ʵ�value
	m[4] = 40;


	//����
	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);	//����keyɾ��
	printMap(m);

	//���
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);

}

int main()
{

	test01();

	//test02();

	system("pause");

	return 0;
}