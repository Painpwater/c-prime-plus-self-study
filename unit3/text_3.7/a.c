// 使用转义序列
#include <stdio.h>

int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is$%.2f a year.",
            salary,salary*12.0f);
    printf("\rGee!\n");

    return 0;
}