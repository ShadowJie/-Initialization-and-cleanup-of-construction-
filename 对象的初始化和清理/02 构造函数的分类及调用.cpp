#include<iostream>
using namespace std;

//1���캯���ķ��༰����
//����
//	���ղ�������	�޲ι�����вι���
class Person
{
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	Person(int a)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}