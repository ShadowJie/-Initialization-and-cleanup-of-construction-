#include <iostream>
using namespace std;

//��ָ����ó�Ա����

//������

class	Person
{
public:

	//thisָ�뱾�� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//const Person * const this;
	//�ڳ�Ա�������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;	//thisָ�벻�����޸�ָ���ָ���
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;	//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};

//void test01()
//{
//	Person p;
//	p.showPerson();
//}

//������	

void test02()
{
	const Person p;	//�ڶ���ǰ��const,��Ϊ������
	//p.m_A = 100;
	p.m_B = 100;	//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();	//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	//test01();
	test02();
	system("pause");

	return 0;
}