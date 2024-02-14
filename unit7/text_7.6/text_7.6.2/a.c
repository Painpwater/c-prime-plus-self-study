// 使用break 退出循环
#include <stdio.h>

int main(void)
{
    float length,width;

    printf("Enter the length of the rectangke:\n");
    while(scanf("%f",&length)==1)
    {
        printf("Length = %.2f:\n",length);
        printf("Enter its width:\n");
        if(scanf("%f,&width")!=1)
            break;
        printf("Width = %.2f:\n",width);
        printf("Area = %.2f:",length*width);
        printf("Enter next length of the rectangke:\n");
    }
    printf("Done.\n");

    return 0;
}