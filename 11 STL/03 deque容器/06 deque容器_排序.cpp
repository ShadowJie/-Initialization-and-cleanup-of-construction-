#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//deque���� ����
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it=100;	//���������ݲ����޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort����
	sort(d.begin(), d.end());	//Ĭ������ ��С����
	printDeque(d);

}

int main()
{

	test01();

	//test02();

	//test03();

	system("pause");

	return 0;
}