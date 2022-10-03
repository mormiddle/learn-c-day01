#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1、全局变量检测增强
int a;
int a = 11;

//2、函数增强
int getRects(w, h)
{
}
void test02()
{
    getRects(10, 10, 10);
}

//3、类型检测增强
void test03()
{
    char* p = malloc(sizeof(64));//malloc返回值是void*
}

//4、struct增强
struct Person
{
    int m_Age;
    //void plugAge();//c语言中struct不可以加函数
};
void test04()
{
    struct Person p1;//c语言中必须加入struct关键字
}

//5、bool类型增强 c语言中没有bool类型
//bool flag;

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
    const int m_B = 20;//伪常量
    //m_B = 20;

    int* p = &m_B;
    *p = 200;
    printf("*p = %d, m_B = %d", *p, m_B);
    //int arr[m_B];不可以初始化数组
}


int main()
{
    test07();
   
   


    system("pause");
    return 0;

}