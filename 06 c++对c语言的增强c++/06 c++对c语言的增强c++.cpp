#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

//1��ȫ�ֱ��������ǿ
//int a;
int a = 11;

//2��������ǿ������������ǿ������ֵ�����ǿ���������ü����ǿ
int getRects(int w, int h)
{
    return w * h;
}
void test02()
{
    getRects(10, 10);
}

//3�����ͼ����ǿ
void test03()
{
    char* p = (char*)malloc(sizeof(64));//malloc����ֵ��void*
}

//4��struct��ǿ
struct Person
{
    int m_Age;
    void plugAge() { m_Age++; };//c++�п��ԼӺ���
};
void test04()
{
    Person p1;//c++�в���ʹ�ùؼ���
    p1.m_Age = 10;
    p1.plugAge();
    cout << p1.m_Age << endl;
}

//5��bool������ǿ c������û��bool����
bool flag;//ֻ������ true������(��0) false�����(0)
void test05()
{
    cout << sizeof(bool) << endl;
} 

//6 ����Ŀ�������ǿ
void test06()
{
    int a = 20;
    int b = 30;

    printf("ret = %d \n", a > b ? a : b);
}

//7��const��ǿ
const int m_A = 10;//�յ������������
void test07()
{
    //m_A = 100;
    const int m_B = 20;//��������
    //m_B = 20;

    int* p = (int*) & m_B;
    *p = 200;
    cout << "*p = " << *p << " m_B = " << m_B;
    int arr[m_B];//���Գ�ʼ������

}

int main()
{
    //test04();
    test07();

    system("pause");
    return 0;

}