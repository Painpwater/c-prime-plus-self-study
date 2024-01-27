#include <stdio.h>
void jolly(void);//函数原型
void deny(void);//函数原型
int main()
{
    jolly();//调用函数
    jolly();
    jolly();
    deny();//调用函数

    return 0;
}

void jolly()//定义函数
{void
    printf("For he's a jolly good fellow!\n");
}

void deny(void)//定义函数
{
    printf("Which nobody can deny!\n");
}