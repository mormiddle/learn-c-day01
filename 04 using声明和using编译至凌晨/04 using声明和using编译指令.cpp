#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

namespace KingGlory
{
	int sunwukongID = 10;
}

//using����
void test01()
{
	int sunwukongID = 20;

	//using������Ҫ��������� 
	//д��using����֮�� ˵��������sunwukong����KingGlory�еı���
	//���� ���������о�ԭ��
	//���Բ����˶�����
	//using KingGlory::sunwukongID;

	cout << sunwukongID << endl;
}

//using����ָ��
namespace lol
{
	int sunwukongID = 60;
}

void test02()
{
	//int sunwukongID = 50;
	using namespace KingGlory;//�򿪷��䣬ֻ�Ǹ���Ȩ�ޣ�ȴû�й涨��������������Բ��������Ļ������������þֲ�����
	using namespace lol;//��lol���䣬���������䣬���б�����ͬ����ɴ���
	cout << lol::sunwukongID << endl;

}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;

}