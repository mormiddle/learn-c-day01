#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1��ȫ�ֱ��������ǿ
int a;
int a = 11;

//2��������ǿ
int getRects(w, h)
{
}
void test02()
{
    getRects(10, 10, 10);
}

//3�����ͼ����ǿ
void test03()
{
    char* p = malloc(sizeof(64));//malloc����ֵ��void*
}

//4��struct��ǿ
struct Person
{
    int m_Age;
    //void plugAge();//c������struct�����ԼӺ���
};
void test04()
{
    struct Person p1;//c�����б������struct�ؼ���
}

//5��bool������ǿ c������û��bool����
//bool flag;

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
    const int m_B = 20;//α����
    //m_B = 20;

    int* p = &m_B;
    *p = 200;
    printf("*p = %d, m_B = %d", *p, m_B);
    //int arr[m_B];�����Գ�ʼ������
}


int main()
{
    test07();
   
   


    system("pause");
    return 0;

}