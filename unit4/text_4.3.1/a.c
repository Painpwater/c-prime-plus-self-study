//在披萨饼中使用已定义的常量
#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area,circum,radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI * radius *radius;
    circum = 2.0* PI * radius;
    printf("Your pizza parameters are as follows:\n"); // 您的披萨参数如下
    printf("circumference = %1.2f,area = %1.2f\n",circum,area); // circumference 周长

    return 0;
}