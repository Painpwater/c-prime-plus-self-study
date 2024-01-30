//
#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n"); //你的体重换成白金值多少美元？
    printf("Let's check it out.\n");
    printf("Please enter your weight in kg:\n"); //请以磅为单位输入您的体重

    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833 * 0.453592;
    
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum prices drop,\n"); //你很容易就值得了！如果铂金价格下跌
    printf("eat more to maintain your value.\n"); //多吃点以保持你的价值

    return 0;
}