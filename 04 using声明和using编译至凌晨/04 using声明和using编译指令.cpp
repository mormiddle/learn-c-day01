#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

namespace KingGlory
{
	int sunwukongID = 10;
}

//using声明
void test01()
{
	int sunwukongID = 20;

	//using声明需要避免二义性 
	//写了using声明之后 说明后续的sunwukong就是KingGlory中的变量
	//但是 编译器又有就原则
	//所以产生了二义性
	//using KingGlory::sunwukongID;

	cout << sunwukongID << endl;
}

//using编译指令
namespace lol
{
	int sunwukongID = 60;
}

void test02()
{
	//int sunwukongID = 50;
	using namespace KingGlory;//打开房间，只是给了权限，却没有规定必须用这个，所以不作声明的话，还是优先用局部变量
	using namespace lol;//打开lol房间，打开两个房间，其中变量相同，造成错乱
	cout << lol::sunwukongID << endl;

}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;

}