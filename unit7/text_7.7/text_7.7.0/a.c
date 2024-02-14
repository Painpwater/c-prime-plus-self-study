// 使用switch语句
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch,ch1;

    printf("Please type in a letter;type # to end my act.\n");
    while((ch = getchar()) !='#')
    {
        if(ch == '\n')
            continue;
        if(islower(ch))
            switch (ch)
            {
            case 'a':
                printf("argali.\n");
                break;
            case 'b':
                printf("B\n");
                break;
            case 'c':
                printf("C\n");
                break;
            default:
                printf("That's a stumper!\n");
                break;
            }
        else
            printf("I recognize only lowercase letters.\n");
        while((ch1=getchar()) != '\n')                      // 跳过输入行的其他部分
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye.\n");

    return 0;
}
