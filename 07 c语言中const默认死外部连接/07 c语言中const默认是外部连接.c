#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    extern const int a;//告诉编译器a在外部
    printf("a = %d", a);

    system("pause");
    return 0;

}