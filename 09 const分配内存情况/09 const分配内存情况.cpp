#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
#include<string.h>
using namespace std;

//1��cosnt�����ڴ棬ȡ��ַ�������ʱ�ڴ�
//2��extern����const��������Ҳ������ڴ�
void test01()
{
    const int m_A = 10;
    int* p = (int*)&m_A;//�������ʱ�ڴ�
}

//3���ñ�������ʼ��const����
void test02()
{
    int a = 10;
    const int b = a;//������ڴ�
    int* p = (int*)&b;
    *p = 1000;
    
    cout << "b = " << b << endl;
}

//4���Զ�����������
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

    cout << "����: " << pl.m_Name << " ���䣺 " << pl.m_Age << endl;

    
}
int main()
{
    test03();
    system("pause");
    return 0;

}