#include<iostream>
using namespace std;
#include<functional>	//�ڽ���������ͷ�ļ�

//�ڽ���������	�����º���

//* `template<class T > T plus<T>`                //�ӷ��º���
//* `template<class T > T minus<T>`              //�����º���
//* `template<class T > T multiplies<T>`    //�˷��º���
//* `template<class T > T divides<T>`         //�����º���
//* `template<class T > T modulus<T>`         //ȡģ�º���
//* `template<class T > T negate<T>`           //ȡ���º���

//negate һԪ�º��� ȡ���º���
void test01()
{
	negate<int>n;
	
	cout << n(50) << endl;

}

//plus ��Ԫ�º���	�ӷ�
void test02()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}