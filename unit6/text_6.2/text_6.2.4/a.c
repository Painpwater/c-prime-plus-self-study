// 注意花括号的使用
#include <stdio.h>

/*int main(void)
{
    int n = 0;

    while(n < 3)
        printf("n is %d\n",n);  
        n++;                    //没用花括号{}，死循环
    printf("That's all this program does.\n");

    return 0;
}
*/
int main(void)
{
    int n = 0;

    while(n++ < 3); //空语句,即循环空语句
        printf("n is %d\n",n);  
    printf("That's all this program does.\n");

    return 0;
}