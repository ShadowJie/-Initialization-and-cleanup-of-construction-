#include<iostream>
using namespace std;
#include<string>

//string���Ӵ�
void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	

}

void test02()
{
	string email = "lisi@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����Ϣ
	int pos = email.find("@");
	string usrName = email.substr(0, pos);
	cout << "usrName = " << usrName << endl;

}
int main()
{
	//test01();

	test02();

	system("pause");

	return 0;


}
