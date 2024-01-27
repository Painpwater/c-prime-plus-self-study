#include <stdio.h>
int compare(int a, int b);//函数原型

int main()
{
    int num1,num2;
    printf("请输入要比较的两个数字：");
    scanf("%d %d",&num1,&num2);
    int result =compare(num1,num2);//调用函数
    printf("大的是%d\n",result);
    return 0;
}

int compare(int a,int b)//定义函数
{
    if (a>b)
    {
        return a;
    }
    else
        return b;

}