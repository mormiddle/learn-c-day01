#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

//1、全局变量检测增强
//int a;
int a = 11;

//2、函数增强、参数类型增强、返回值检测增强、函数调用检测增强
int getRects(int w, int h)
{
    return w * h;
}
void test02()
{
    getRects(10, 10);
}

//3、类型检测增强
void test03()
{
    char* p = (char*)malloc(sizeof(64));//malloc返回值是void*
}

//4、struct增强
struct Person
{
    int m_Age;
    void plugAge() { m_Age++; };//c++中可以加函数
};
void test04()
{
    Person p1;//c++中不必使用关键字
    p1.m_Age = 10;
    p1.plugAge();
    cout << p1.m_Age << endl;
}

//5、bool类型增强 c语言中没有bool类型
bool flag;//只有真或假 true代表真(非0) false代表假(0)
void test05()
{
    cout << sizeof(bool) << endl;
} 

//6 、三目运算符增强
void test06()
{
    int a = 20;
    int b = 30;

    printf("ret = %d \n", a > b ? a : b);
}

//7、const增强
const int m_A = 10;//收到保护不会更改
void test07()
{
    //m_A = 100;
    const int m_B = 20;//正常常量
    //m_B = 20;

    int* p = (int*) & m_B;
    *p = 200;
    cout << "*p = " << *p << " m_B = " << m_B;
    int arr[m_B];//可以初始化数组

}

int main()
{
    //test04();
    test07();

    system("pause");
    return 0;

}