#include<iostream>
using namespace std;
#include<deque>

//deque���� ���ݴ�ȡ
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it=100;	//���������ݲ����޸�
		cout << *it << " ";
	}
	cout << endl;
}

//���ݴ�ȡ
void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;

	cout << "back:" << d.back() << endl;

}
int main()
{

	test01();

	//test02();

	//test03();

	system("pause");

	return 0;
}