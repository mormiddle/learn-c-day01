#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

void mySwap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "sa = " << a << endl;
    cout << "sb = " << b << endl;
}

void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);//ֵ����
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//��ַ����
void mySwap2(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void test02()
{
    int a = 10;
    int b = 20;
    mySwap2(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//���ô��� �����ڵ�ַ����
void mySwap3(int &a, int &b)//�൱��&a=a
{
    int tmp = a;
    a = b;
    b = tmp;
}

void test03()
{
    int a = 10;
    int b = 20;
    mySwap3(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//���õ�ע������
//1�����ñ�����һ��Ϸ����ڴ�ռ�
//2����Ҫ���ؾֲ�����������

int& doWork()
{
    int a = 10;
    return a;
}

void test04()
{
    //int& a = 10; //���ñ�������һ��Ϸ����ڴ�ռ�

    int& ret = doWork();
    cout << "ret = " << ret << endl;//��һ��10�Ǳ����������Ż�
    cout << "ret = " << ret << endl;
    cout << "ret = " << ret << endl;
    cout << "ret = " << ret << endl;
}

int& doWork2()
{
    static int a = 10;
    return a;
}


void test05()
{
    //int& a = 10; //���ñ�������һ��Ϸ����ڴ�ռ�

    int& ret = doWork2();
    cout << "ret = " << ret << endl;//
    cout << "ret = " << ret << endl;
    cout << "ret = " << ret << endl;
    cout << "ret = " << ret << endl;
}

int main()
{
    test05();

    system("pause");
    return 0;

}