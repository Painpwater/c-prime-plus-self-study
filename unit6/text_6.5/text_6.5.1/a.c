#include <stdio.h>
// 可以用递减运算符来递减计数器
/*
int main(void)
{
    int secs;

    for(secs = 5;secs >0;secs--)
    {
        printf("%d seconds!\n",secs);
    }
    printf("We have ignition!\n");

    return 0;
}*/
// 可以让计数器递增2，10
/*
int main(void)
{
    int n;

    for(n =2; n<60;n=n+13)
    {
        printf("%d\n",n);
    }

    return 0;
}
*/
// 可以用字符代替数字计数
/*
int main(void)
{
    char ch;
    for (ch ='a';ch <='z';ch++)
    {   
        printf("%c is %d\n",ch,ch);
    }

    return 0;
}
*/
// 除了测试迭代次数外，还可以测试其他条件，如限制立方的大小
/*
int main(void)                                   
{
    int num;

    printf("    n  n cubed\n");      
    for(num = 1; num*num*num<=999;num++)
    {
        printf("%5d    %-5d\n",num,num*num*num);
    }               

    return 0;
}
*/
// 可以让递增的量几何增长
/*
int main(void)
{
    double debt;
    for(debt =100.0; debt<150.0 ;debt =debt *1.1)
    {
        printf("Your debt is now $%.2f.\n",debt);
    }

    return 0;
}
*/
// 第3个表达式可以使用任意合法的表达式,无论什么表达式，每次迭代都会更新该表达式的值
/*
int main(void)
{
    int x;
    int y =55;

    for (x = 1; y<=75; y =(++x *5)+50)
    {
        printf("%10d %10d\n",x,y);
    }

    return 0;
}
*/
// 可以省略一个或多个表达式（不能省略分号）,只要在循环中包括能结束循环的语句
/*
int main(void)
{
    int ans,n;
    ans = 2;

    for (n=3;ans<=25;)
    {
        ans =ans *n;
    }    
    printf("n=%d; ans =%d.\n",n,ans);
    
    return 0;
}
*/
// 省略第二个表达式，被视为真，则无限循环  如for( ; ;)

// 第一个表达式不一定是给变量赋初值，也可以使用printf(),在循环开始之前，只对第一个表达式求值一次或者执行一次
/*
int main(void)
{
    int num =0;

    for (printf("Keep entering numbers!.\n");num!=6;)
    {   
        scanf("%d",&num);
    }    
    printf("That's the one I want!\n");

    return 0;
}
*/
// 循环体中的行为可以改变循环头中的表达式。
/*
int main(void)
{
    int n;

    for(n =1; n<10000;n=n+delta)
    {
        //delta是个变量可以改变
    }
}
*/
