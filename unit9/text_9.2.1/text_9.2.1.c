/*misuse.C--错误地使用函数*/
#include <stdio.h>
int imax(int,int);
/*旧式函数声明*/
int main(void)
{
    printf ("The maximum of %d and %d is %d.\n",3,5,imax(3,9));
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3.5,5.5));
    return 0;
}
int imax(int n,int m)
{
    return (n >m ? n : m);
}


