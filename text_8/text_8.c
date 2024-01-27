//函数调用函数
#include <stdio.h>
void two(void);
void one_three(void);

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void two(void)
{
    printf("two\n");
}

void one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}