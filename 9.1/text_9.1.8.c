//使用return从函数中返回值,返回两个数中的较小值
#include <stdio.h>
int imin(int,int); //函数原型

int main()
{
    int int1,int2;

    printf("Enter a pair of integers(q to quit):\n");
    while (scanf("%d%d",&int1,&int2)== 2)
    {
        printf("The lesser of %d and %d is %d.\n",int1,int2,imin(int1,int2));
        printf("Enter a pair of integers(q to quit):\n");
    }
    printf("Bye\n");

    return 0;
}
int imin(int n,int m) //定义函数
{
    int min;

    if (n<m)
    {
        min =n;
    }
    else
    {
        min= m;
    }
    
    return min;
}













/*
int imin(int a,int b); //函数原型

int main()
{
    int d=0;
    d=imin(15,9);
    printf("%d\n",d);
    
    return 0;
}
int imin(int a,int b) //定义函数
{
    if (a<=b)
    {
        return a;
       
    }
    else
    {
        return b;
    }
}
*/