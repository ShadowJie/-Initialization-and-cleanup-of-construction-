//ջ�������ýӿ�
#include<iostream>
using namespace std;
#include<stack>

//ջstack����
void test01()
{
	//����ջ���� ջ������������Ƚ����
	stack<int> s;

	//��ջ�����Ԫ�أ����� ��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻҪջ��Ϊ�� �鿴ջ������ջ
	while (!s.empty()) {
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	}
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}