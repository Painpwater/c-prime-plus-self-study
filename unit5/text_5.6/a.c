// 定义一个带一个参数的函数
#include <stdio.h>
void pound(int n); // 函数原型

int main(void)
{
    int times = 5;
    char ch = '!'; //ASCII码是33
    float f = 6.0;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

void pound(int n)
{
    while (n-->0)
    {
        printf("#");
    }
    printf("\n");
}