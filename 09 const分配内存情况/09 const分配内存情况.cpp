#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
#include<string.h>
using namespace std;

//1、cosnt分配内存，取地址会分配临时内存
//2、extern修饰const，编译器也会分配内存
void test01()
{
    const int m_A = 10;
    int* p = (int*)&m_A;//会分配临时内存
}

//3、用变量来初始化const变量
void test02()
{
    int a = 10;
    const int b = a;//会分配内存
    int* p = (int*)&b;
    *p = 1000;
    
    cout << "b = " << b << endl;
}

//4、自定义数据类型
struct Person
{
    string m_Name = "bbb";
    int m_Age = 18;
};
void test03()
{
    const Person pl;
    //pl.m_Name = "aaa";

    Person* p = (Person*)&pl;
    p->m_Name = "aaa";
    p->m_Age = 18;

    cout << "姓名: " << pl.m_Name << " 年龄： " << pl.m_Age << endl;

    
}
int main()
{
    test03();
    system("pause");
    return 0;

}