#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
using namespace std;

int main()
{
    extern const int a;//告诉编译器a在外部
    cout << "a = " << a << endl;
    system("pause");
    return 0;

}