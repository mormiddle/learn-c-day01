#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

int main()
{
    extern const int a;//���߱�����a���ⲿ
    cout << "a = " << a << endl;
    system("pause");
    return 0;

}