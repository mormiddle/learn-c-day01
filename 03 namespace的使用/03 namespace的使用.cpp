#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;
#include "game1.h"
#include "game2.h"

//  namespace���ڽ��������ͻ������

//   �����ռ��� ���Դ�ź������������ṹ�塢��

//   �����ռ���붨����ȫ����������
namespace A
{
	void func();
	int m_A = 10;
	struct person
	{

	};
	class Animal;

	//  �����ռ����Ƕ�������ռ�
	namespace B
	{
		int m_A = 20;
	}

}

void test01()
{
	cout << "B�����ռ��µ�ֵΪ�� " << A::B::m_A << endl;
}

//   �����ռ��ǿ��ŵģ��ظ�����һ�������ռ䣬�����滻�������

namespace A
{
	int m_B = 1000;
}

void test02()
{
	cout << "A�ռ��µ�m_AֵΪ " << A::m_A << " A�ռ��µ�m_BֵΪ " << A::m_B << endl;
}

//  �����������ռ�
namespace
{
	int m_c = 200;
	int m_d = 2000;
}
//�����������ռ��൱��д��static int ��̬ȫ�ֱ���
//ֻ���ڵ�ǰ�ļ���ʹ��

//�����ռ����ȡ����
namespace verylongname
{
	int m_A = 500;
}

void test03()
{
	namespace veryshortname = verylongname;
	cout << verylongname::m_A << endl;
	cout << verylongname::m_A << endl;
}

int main()
{

	//test01();
	//test02();
	//lol::goArk();
	test03();

	system("pause");
	return EXIT_SUCCESS;

}