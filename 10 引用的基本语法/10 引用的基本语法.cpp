#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

//1、引用基本语法  type &别名 = 原名
void test01()
{
    int a = 10;
    int& b = a;

    b = 20;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//2、引用必须初始化
void test02()
{
    // int &a;
    int a = 10;
    int& b = a;
    int c = 20;

    b = c;//这是赋值不是引用
}

//3、对数组建立引用
void test03()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    int(&pArr)[10] = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << pArr[i] << " ";
    }
    cout << endl;

    //第二种方式 起别名
    typedef int(ARRAYREF)[10];
    ARRAYREF& pArr2 = arr;

    for (int i = 0; i < 10; i++)
    {
        cout << pArr2[i] << " ";
    }
    cout << endl;
}

int main()
{
    test03();
    system("pause");
    return 0;

}