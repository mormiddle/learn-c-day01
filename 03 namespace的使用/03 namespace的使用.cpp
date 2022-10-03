#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;
#include "game1.h"
#include "game2.h"

//  namespace用于解决命名冲突的问题

//   命名空间下 可以存放函数、变量、结构体、类

//   命名空间必须定义在全局作用域下
namespace A
{
	void func();
	int m_A = 10;
	struct person
	{

	};
	class Animal;

	//  命名空间可以嵌套命名空间
	namespace B
	{
		int m_A = 20;
	}

}

void test01()
{
	cout << "B命名空间下的值为： " << A::B::m_A << endl;
}

//   命名空间是开放的，重复定义一个命名空间，不会替换，会叠加

namespace A
{
	int m_B = 1000;
}

void test02()
{
	cout << "A空间下的m_A值为 " << A::m_A << " A空间下的m_B值为 " << A::m_B << endl;
}

//  无名的命名空间
namespace
{
	int m_c = 200;
	int m_d = 2000;
}
//无名的命名空间相当于写了static int 静态全局变量
//只能在当前文件内使用

//命名空间可以取别名
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