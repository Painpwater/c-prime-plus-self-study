// 一个拖沓且错误的猜数字程序
#include <stdio.h>

int main(void)
{
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
    while((response=getchar())!='y')
    {
        if(response=='n')
            printf("Well,then,is it %d?\n",++guess);
        else
            printf("Sorry,I understander only 'y' or 'n'.\n");
        while(getchar() !='\n')
            continue;   
    }    
    printf("I know I could do it!\n");

    return 0;
}